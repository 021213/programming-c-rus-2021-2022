#include<iostream>
#include<clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;
	cout << "Введите числа для сложения : " << endl;
	cin >> a >> b;
	cout << "Сумма чисел равна : " << endl;
	cout << a + b << endl;
	return 0;
}