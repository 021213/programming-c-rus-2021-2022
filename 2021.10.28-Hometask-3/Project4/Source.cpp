#include<iostream>

using namespace std;

int C(int n = 0, int k = 0)
{
	if (k == 0 || k == n + 1)
	{
		return 1;
	}
	else
	{
		return C(n - 1, k) + C(n - 1, k - 1);
	}
}

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	cin >> n >> k;
	int Cnk = 1;
	for (int i = n - k + 1, div = 1; i <= n; ++i)
	{
		int mult = i;
		while (mult % div == 0 && div <= k)
		{
			mult /= div;
			++div;
		}
		Cnk *= mult;
		while (Cnk % div == 0 && div <= k)
		{
			Cnk /= div;
			++div;
		}
	}
	cout << Cnk << endl;
	return EXIT_SUCCESS;
}