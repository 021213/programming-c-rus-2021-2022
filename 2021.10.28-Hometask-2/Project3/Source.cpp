#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int k = 0;
	int m = 0;
	int n = 0;

	cin >> k >> m >> n;

	if (n % k == 0)
	{
		cout << 2 * m * n / k;
	}
	else
	{
		if (n % k <= k / 2)
		{
			cout << m * ((n / k) * 2 + 1);
		}
		else
		{
			cout << m * ((n / k) * 2 + 2);
		}
	}

	return EXIT_SUCCESS;
}