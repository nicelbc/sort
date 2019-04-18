#include<iostream>
#include"sortTestHelper.h"
#include"quickSort.h"
#include"insertSort.h"
#include"mergeSort.h"
#include"selectSort.h"
using namespace::std;


int main()
{
	int n = 10000;
	int *arr = sortTestHelper::generateRandomArray(n, 0, n);
	//selectSort(arr, n);
	//insertSort(arr, n);
	//mergeSort(arr, n);
	
	//quickSort(arr, n);
	
	sortTestHelper::printArray(arr, n);
	delete[] arr;
	return 0;
}