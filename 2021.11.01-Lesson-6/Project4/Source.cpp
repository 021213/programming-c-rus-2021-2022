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

	int dn = 0;
	cin >> dn;
	int* newArr = new int[n + dn]{ 0 };

	for (int i = 0; i < n; ++i)
	{
		newArr[i] = arr[i];
	}

	delete[] arr;
	arr = newArr;
	n += dn;

	delete[] arr;
	return EXIT_SUCCESS;
}
