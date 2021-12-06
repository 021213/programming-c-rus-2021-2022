#include"myLib1.h"

int f(int n)
{
	if (n <= 2)
	{
		return n;
	}
	return g(n - 1) + f(n - 2);
}