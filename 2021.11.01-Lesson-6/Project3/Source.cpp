#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	cin >> n;
	int* arr = new int[n] { 0 };
	for (int i = 0; i < n; ++i)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr + i << " = " << arr[i] << endl;
	}
	delete[] arr;
	return EXIT_SUCCESS;
}
