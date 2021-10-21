#include<iostream>
#include<cstdlib>
#include<ctime>
#define ARRLENGTH 20

using namespace std;

int main(int argc, char* argv[])
{
	//заполнение массива
	const int N = 10;

	int a[N] = { 0 };

	srand(time(0));
	int min = -99;
	int max = 99;
	for (int i = 0; i < N; ++i)
	{
		a[i] = rand() % (max - min + 1) + min;
	}

	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	int sumPositive = 0;
	for (int i = 0; i < N; ++i)
	{
		if (a[i] > 0)
		{
			sumPositive += a[i];
		}
		sumPositive += (a[i] > 0) * a[i];
	}
	cout << sumPositive;

	return EXIT_SUCCESS;
}