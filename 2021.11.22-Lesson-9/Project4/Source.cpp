#include<iostream>
#include<iomanip>

using namespace std;

int** createMatrix(int n)
{
	int** result = new int* [n] { 0 };

	for (int i = 0; i < n; ++i)
	{
		result[i] = new int[n] { 0 };
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
			cout << setw(3) << matr[i][j] << " ";
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

/*
	1	2	3	4
	12	13	14	5
	11	16	15	6
	10	9	8	7
*/

void fillSpiral(int** matr, int n, int circle = 0, int el = 1)
{
	if (circle > n / 2)
	{
		if (n % 2 == 1)
		{
			matr[circle - 1][circle - 1] = el;
		}
		return;
	}

	for (int i = circle; i < n - circle - 1; ++i, ++el)
	{
		matr[circle][i] = el;
	}
	for (int i = circle; i < n - circle - 1; ++i, ++el)
	{
		matr[i][n - circle - 1] = el;
	}
	for (int i = n - circle - 1; i >= circle + 1; --i, ++el)
	{
		matr[n - circle - 1][i] = el;
	}
	for (int i = n - circle - 1; i >= circle + 1; --i, ++el)
	{
		matr[i][circle] = el;
	}

	fillSpiral(matr, n, circle + 1, el);

}

int main()
{
	int n = 9;
	int** matr = createMatrix(n);

	fillSpiral(matr, n);
	printMatrix(matr, n);

	deleteMatrix(matr, n);
	return 0;
}