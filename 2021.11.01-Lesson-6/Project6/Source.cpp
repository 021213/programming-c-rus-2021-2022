#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 5;
	int** matrix = new int* [n] { 0 }; //� ���� ����� n �������
	for (int i = 0; i < n; ++i)
	{
		matrix[i] = new int[n] { 0 }; //������ ������� ����� ����� n
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			matrix[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < n * n; ++i)
	{
		matrix[i / n][i % n] = rand() % 10;
	}

	for (int i = 0; i < n; ++i)
	{
		delete[] matrix[i]; //����� ������� ������� ������ �������
	}
	delete[] matrix; //����� ������� ��������� �� �������� �� ������ �������


	int* matr = new int[n * n * n]{ 0 };
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				matr[n * n * i + n * j + k] = rand() % 10; //matr[i][j][k]
			}
		}
	}
	delete[] matr;

	return EXIT_SUCCESS;
}
