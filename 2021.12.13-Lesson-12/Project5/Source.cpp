#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	/*
in		������� ��� ����� (���������� �� ��������� ��� ifstream)
out		������� ��� ������ (���������� �� ��������� ��� ofstream)
binary	������� ���� � �������� ����
a��		������������ ������; ������ � ����� �����
ate		���������� �������� ��������� �� ����� �����
trunc	���������� ����������, ���� ���� ����������
		(���������� �� ���������, ���� ���� out ������, � ����� ate � ��� � ���) 
	*/
	fstream stream;
	stream.open("in.txt", ios::in);
	int sum = 0;
	while (!stream.eof())
	{
		int a = 0;
		stream >> a;
		sum += a;
	}
	stream.close();
	stream.open("in.txt", ios::app);
	stream << sum << endl;
	system("pause");
	stream << sum << endl;
	stream << sum << endl;
	stream << sum << endl;
	stream.close();

	return 0;
}