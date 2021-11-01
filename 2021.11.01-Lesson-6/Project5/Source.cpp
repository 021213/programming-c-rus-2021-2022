#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 5;
	int* arr = nullptr;

	arr = (int*)malloc(sizeof(int) * n);
	free(arr);

	arr = (int*)calloc(n, sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < n; ++i)
	{
		cout << "[" << arr + i << "]=" << arr[i] << "\t" << endl;
	}

	n += 2;
	arr = (int*) realloc(arr, n);
	for (int i = 0; i < n; ++i)
	{
		cout << "[" << arr + i << "]=" << arr[i] << "\t" << endl;
	}

	free(arr);
	return EXIT_SUCCESS;
}
