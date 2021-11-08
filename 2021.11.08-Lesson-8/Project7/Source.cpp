#include<iostream>

using namespace std;

int** createMatrix(int n)
{
	int** result = new int* [n] {0};

	for (int i = 0; i < n; ++i)
	{
		result[i] = new int[n] {0};
	}
	return result;
}

void randomizeMatrix(int** matr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matr[i][j] = rand() % 10;
		}
	}
}

void printMatrix(int** matr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}
}

void deleteMatrix(int** matr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		delete[] matr[i];
	}
	delete[] matr;
}

int main(int argc, char* argv)
{
	int n = 10;
	int** matrix = createMatrix(n);
	randomizeMatrix(matrix, n);
	printMatrix(matrix, n);
	deleteMatrix(matrix, n);
	return EXIT_SUCCESS;
}