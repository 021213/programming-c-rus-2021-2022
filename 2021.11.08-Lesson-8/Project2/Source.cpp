#include<iostream>

using namespace std;

/// <summary>
/// Функция, которая считает сумму чисел от a до b
/// </summary>
/// <param name="">начало промежутка</param>
/// <param name="">конец промежутка</param>
/// <returns>сумма чисел из промежутка</returns>
int sum(int, int);

void printSum(int start, int end);

int main(int argc, char* argv)
{
	int a = 0;
	int b = 0;
	cin >> a >> b;

	printSum(a, b); //печатает сумму чисел от a до b

	cout << sum(a, b);

	return EXIT_SUCCESS;
}

int sum(int start, int end)
{
	if (start > end)
	{
		int t = start;
		start = end;
		end = t;
	}
	int result = 0;
	for (int i = start; i <= end; ++i)
	{
		result += i;
	}
	return result;
}

void printSum(int start, int end)
{
	cout << sum(start, end) << endl;
	return;
}