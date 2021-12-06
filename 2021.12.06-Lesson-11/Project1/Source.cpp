#include<iostream>
#include<cstring>

using namespace std;

int main(int argc, char* argv)
{
	/*
	int a[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	a = 5;
	cout << *a << endl;
	*/

	char str1[10] = "banana";
	cout << str1 << endl;
	//str1 = "nebanana" - не получится
	char str2[10]{ 'b', 'a', 'n', 'a', 'n', 'a'};
	cout << str2 << endl;

	str1[0] = '5';
	str1[2] = 48;
	cout << str1 << endl;

	cout << "FUNCTIONS:" << endl;
	cout << "strlen(str1) : " << strlen(str1) << endl;
	cout << "sizeof(str1) : " << sizeof(str1) << endl;
	cout << "strlen(str2) : " << strlen(str2) << endl;
	cout << "\\0 -> " << (int)'\0' << endl;
	str2[5] = '\0';
	cout << "strlen(str2) : " << strlen(str2) << " " << str2 << endl;
	str2[3] = 0;
	cout << "strlen(str2) : " << strlen(str2) << " " << str2 << endl;

	cout << endl << "GETS_S" << endl;
	gets_s(str1);
	cout << "inputed 5 characters : " << str1 << endl;


	return EXIT_SUCCESS;
}