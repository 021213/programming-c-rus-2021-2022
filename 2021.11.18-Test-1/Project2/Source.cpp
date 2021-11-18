#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	char c = 0;
	int number = 0;
	int max = 0;
	int min = 0;
	bool gotFirstMin = false;
	bool gotFirstMax = false;
	int index = 0;
	while (c != '\n')
	{
		//cin >> c;
		scanf_s("%c", &c);
		if (c >= '0' && c <= '9')
		{
			number = number * 10 + c - '0';
		}
		else
		{
			if (index % 2 == 0 && (number > max || !gotFirstMax))
			{
				max = number;
				gotFirstMax = true;
			}
			if (index % 2 != 0 && (number < min || !gotFirstMin))
			{
				min = number;
				gotFirstMin = true;
			}
			++index;
			number = 0;
		}
		cout << c << ' ' << (int)c << endl;
	}
	cout << min + max;
	return 0;
}