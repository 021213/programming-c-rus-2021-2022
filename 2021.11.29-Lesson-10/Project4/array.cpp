#include"array.h"

int* createArray(int length)
{
	return new int[length];
}

void deleteArray(int* arr)
{
	delete[] arr;
}

void printArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void randomizeArray(int* arr, int length)
{
	for (int i = 0; i < length; ++i)
	{
		arr[i] = rand() % 90 + 10;
	}
}