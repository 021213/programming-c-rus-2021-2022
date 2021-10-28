#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	//получение ссылки на переменную
	int a = 0;
	cout << &a << " -> " << a << endl;
	float f = 5.25;
	cout << &f << " -> " << f << endl;

	int* pa = 0; //переменная, которая может хранить адрес переменной int
	pa = &a;
	cout << &pa << " -> " << pa << " -> " << *pa << endl;
	*pa = 23;
	cout << &a << " -> " << a << endl;
	cout << sizeof(int) << " " << sizeof(float) << endl;
	pa = (int*)&f;
	cout << &pa << " -> " << pa << " -> " << *pa << endl;
	cout << pa + 1 << endl;


	return EXIT_SUCCESS;
}