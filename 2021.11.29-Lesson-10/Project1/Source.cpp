/*
Для зачета:
1. Контрольная работа. Еще одно переписывание.
2. Домашние задания.
	- неправильная работа с репозиторием
	- неправильное оформление кода
	- нерешенные задачи
*/
#include<iostream>

using namespace std;

int g(int);
int f(int);

int f(int n)
{
	if (n <= 2)
	{
		return n;
	}
	return g(n - 1) + f(n - 2);
}

int g(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return g(n - 2) + f(n - 1);
}

int main()
{
	cout << g(10);
	return 0;
}