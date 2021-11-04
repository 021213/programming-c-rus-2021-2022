#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	bool exiting = false;

	int capacity = 2;
	int count = 0;
	int* a = new int[capacity] { 0 };

	while (!exiting)
	{
		system("cls");
		printf("0. Выход из программы.\n");
		printf("1. Вывод текущего состояния массива. \n");
		printf("2. Добавить элемент в конец массива. \n");
		printf("3. Добавить элемент в начало массива.\n");
		printf("4. Удалить элемент из конца массива. \n");
		printf("5. Удалить элемент из начала массива.\n");
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

			break;
		}
		case 50: //2
		{

			break;
		}
		case 51: //3
		{

			break;
		}
		case 52: //4
		{

			break;
		}
		}
	}

	return 0;
}
