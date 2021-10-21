#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int count = 0;
	int sum = 0;
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		int n = 0;
		cin >> n;
		sum += n;
	}
	cout << sum;
	return EXIT_SUCCESS;
}