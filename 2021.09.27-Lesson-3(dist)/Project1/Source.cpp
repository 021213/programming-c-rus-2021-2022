#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	//Цикл while
	int count = 0;
	while (count < 10)
	{
		cout << "Hello world!" << endl;
		count++; // count = count + 1; count += 1;
	}

	{
		int c = 1;
		int sum = 0;
		while (c != 0)
		{
			cin >> c;
			sum += c;
		}
		cout << sum << endl;
	}

	{
		int c = 0;
	}

	return EXIT_SUCCESS;
}