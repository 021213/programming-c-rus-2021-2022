#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int countPositive = 0;
	int countZeros = 0;
	int countNegative = 0;
	for (int i = 0; i < n; ++i)
	{
		int x = 0;
		cin >> x;
		countZeros += (int)(x == 0);
		countNegative += (int)(x < 0);
		countPositive += (int)(x > 0);
	}
	cout << countNegative << " " << countZeros << " " << countPositive << endl;
	return EXIT_SUCCESS;
}