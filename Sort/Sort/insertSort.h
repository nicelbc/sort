#pragma once
template <typename T>
void  insertSort(T arr[], int n) {

	for (int i = 1; i < n; i++) {

		//Ñ°ÕÒarr[i]ºÏÊÊµÄÎ»ÖÃ
		T e = arr[i];
		int j;
		for (j = i; j > 0 && arr[j - 1] > e; j--) {
			arr[j] = arr[j - 1];
		}
		arr[j] = e;

	}
}