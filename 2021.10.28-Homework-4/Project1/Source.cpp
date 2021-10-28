#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int a[100]{ 0 };

	int n = 0;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << "ARRAY : ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "EVEN : ";
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	cout << "SUM : " << sum << endl;

	int multOfNegative = 1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			multOfNegative *= a[i];
		}
	}
	cout << "PRODUCT OF NEGATIVE : " << multOfNegative << endl;

	int firstMinIndex = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < a[firstMinIndex])
		{
			firstMinIndex = i;
		}
	}
	cout << "FIRST MIN INDEX : " << firstMinIndex << endl;

	int firstMax = a[0];
	int secondMax = a[1];
	if (firstMax < secondMax)
	{
		int t = firstMax;
		firstMax = secondMax;
		secondMax = t;
	}
	for (int i = 0; i < n; ++i)
	{
		if (firstMax < a[i])
		{
			secondMax = firstMax;
			firstMax = a[i];
		}
		else
		{
			if (secondMax < a[i])
			{
				secondMax = a[i];
			}
		}
	}
	cout << "SECOND MAX : " << secondMax << endl;

	for (int i = 0; i < n; ++i)
	{
		cout << a[n - 1 - i] << " "; //a[n - 1 - i] - i-й элемент с конца
	}
	cout << endl;

	cout << "REVERSE : ";
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "ODD INDEXES : ";
	for (int i = 1; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	return EXIT_SUCCESS;
}