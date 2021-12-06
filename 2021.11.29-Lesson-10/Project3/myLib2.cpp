#include"myLib2.h"

int g(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	return g(n - 2) + f(n - 1);
}