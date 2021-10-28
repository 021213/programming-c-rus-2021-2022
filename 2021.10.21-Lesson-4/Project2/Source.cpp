#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	const int n = 10;
	int a[n]{ 0 };
	
	for (int i = 0; i < n; ++i)
	{
		a[i] = rand() % 90 + 10; // rand() % 90 = 0..89 -> 10 .. 99
	}

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	//дан массив, найти максимальный элемент
	int max = a[0];
	for (int i = 1; i < n; ++i)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "MAX = " << max << endl;

	//дан массив, найти индекс максимального элемента
	//если таковых несколько, найти индекс первого
	int firstMaxIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[firstMaxIndex] < a[i])
		{
			firstMaxIndex = i;
		}
	}
	cout << "first MAX index = " << firstMaxIndex << endl;

	//дан массив, найти индекс максимального элемента
	//если таковых несколько, найти индекс последнего
	int lastMaxIndex = 0;
	for (int i = 1; i < n; ++i)
	{
		if (a[lastMaxIndex] <= a[i])
		{
			lastMaxIndex = i;
		}
	}
	cout << "last MAX index = " << lastMaxIndex << endl;



	return EXIT_SUCCESS;
}