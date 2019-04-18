#pragma once
#include<iostream>
#include<cstdio>
#include<assert.h>
#include<time.h>
using namespace ::std;
namespace sortTestHelper {

	int* generateRandomArray(int n, int rangeL, int rangeR) {
		
		assert(rangeL <= rangeR);
		int *arr = new int[n];
		srand((unsigned int)time(NULL));
		for (int i = 0; i < n; i++)
			arr[i] = rand() % (rangeR - rangeL) + rangeL;
		return arr;

	}

	void printArray(int arr[], int n) {
		for (int i = 0; i < n; i++)
			cout << arr[i] << " ";
		cout << endl;
		
	}

}