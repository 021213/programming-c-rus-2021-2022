#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int pow = 1;
	for (int i = 0; i < n; ++i)
	{
		pow *= 2;
	}
	cout << pow;
	return EXIT_SUCCESS;
}