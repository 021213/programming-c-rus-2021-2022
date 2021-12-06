#include"myLib.h"

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