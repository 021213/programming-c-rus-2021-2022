#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{

	{
		int c = 0;
		cin >> c;
		int sum = 0;
		//���� � ������������
		while (c != 0) //� ���� �� ��������?
		{
			sum += c;
			cin >> c;
		}
		cout << sum << endl;
	}

	{
		int c = 0;
		int sum = 0;
		//���� � ������������
		do
		{
			cin >> c;
			sum += c;
		} while (c != 0); //� ���� �� ��� ���?
		cout << sum << endl;
	}

	return EXIT_SUCCESS;
}