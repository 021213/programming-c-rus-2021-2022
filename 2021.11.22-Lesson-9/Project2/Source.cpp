#include<iostream>

using namespace std;

int fact(int n)
{
	if (n == 0)
	{
		return 1;
	}
	return n * fact(n - 1);
}

int Cnk(int n, int k)
{
	//C_n^k = C_(n-1)^(k-1) + C_(n-1)^k
	if (k == n || k == 0)
	{
		return 1;
	}
	return Cnk(n - 1, k - 1) + Cnk(n - 1, k);
}

int main()
{
	int n = 5;

	cout << fact(n) << endl;

	cout << Cnk(5, 3) << endl;

	return EXIT_SUCCESS;
}