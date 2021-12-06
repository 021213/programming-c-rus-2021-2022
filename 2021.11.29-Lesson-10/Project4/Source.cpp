#include<iostream>
#include"array.h"

using namespace std;

int main()
{
	int n = 10;
	int* arr = createArray(n);
	printArray(arr, n);
	randomizeArray(arr, n);
	printArray(arr, n);
	deleteArray(arr);
	return 0;
}