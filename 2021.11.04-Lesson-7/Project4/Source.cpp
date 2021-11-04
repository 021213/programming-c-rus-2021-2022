#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	bool exiting = false;
	while (!exiting)
	{
		system("cls");
		printf("______MENU______\n");
		printf("0 - Exit\n");
		printf("1 - Sum of numbers\n");
		printf("2 - Difference of numbers\n");
		printf("Input your choice : ");

		//char c = _getch();
		char c = 0;
		cin >> c;

		switch (c)
		{
		case 27: case 48:
			exiting = true;
			break;
		case 49: //1
		{
			int a = 0;
			int b = 0;
			cout << "Input addends for sum : " << endl;
			cin >> a >> b;
			cout << a + b << endl;
			system("pause");
			break;
		}
		case 50: //2
		{
			int a = 0;
			int b = 0;
			cout << "Input addends for difference : " << endl;
			cin >> a >> b;
			cout << a - b << endl;
			system("pause");
			break;
		}
		}
	}

	return 0;
}
