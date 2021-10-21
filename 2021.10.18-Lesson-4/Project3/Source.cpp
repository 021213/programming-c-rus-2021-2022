#include<iostream>
#define ARRLENGTH 20

using namespace std;

int main(int argc, char* argv[])
{
	const int N = 10;

	int a[N] = { 0 };
	for (int i = 0; i < N; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;


	int b[ARRLENGTH] = { 0 };
	for (int i = 0; i < ARRLENGTH; ++i)
	{
		cout << b[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}