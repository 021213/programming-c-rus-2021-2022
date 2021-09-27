#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	{
		int c = 0;
		cin >> c;
		int sum = 0;
		//цикл с предусловием
		while (c != 0) //а надо ли начинать?
		{
			sum += c;
			cin >> c;
		}
		cout << sum << endl;
	}

	{
		int c = 0;
		int sum = 0;
		//цикл с постусловием
		do
		{
			cin >> c;
			sum += c;
		} while (c != 0); //а надо ли еще раз?
		cout << sum << endl;
	}

	return EXIT_SUCCESS;
}