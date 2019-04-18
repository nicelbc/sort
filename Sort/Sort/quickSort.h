#pragma once
template<typename T>
int __partition(T arr[], int l, int r) {
	
	T v = arr[l];
	while (l < r) {
		while (l<r && arr[r] > v) r--;
		if(l<r)
			arr[l++] = arr[r];
		while (l<r && arr[l] < v) l++;
		if(l<r)
			arr[r--] = arr[l];
	}

	arr[l] = v;
	return l;
}

template<typename T>
void __quickSort(T arr[], int l, int r) {

	if (l >= r)
		return;
	int p = __partition(arr, l, r);
	__quickSort(arr, l, p - 1);
	__quickSort(arr, p + 1, r);

}
template<typename T>
void quickSort(T arr[], int n) {

	__quickSort(arr, 0, n - 1);
	
}