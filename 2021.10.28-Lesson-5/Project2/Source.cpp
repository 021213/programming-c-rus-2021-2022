#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	char varChar = 0;
	cout << "CHAR " << sizeof(char) << endl;
	varChar = 48;
	cout << varChar << endl;
	//??????? ASCII
	for (int i = 0; i < 256; ++i)
	{
		varChar = i;
		cout << i << " " << varChar << "\t";
	}
	system("pause");
	varChar = 7;
	cout << varChar;
	cout << endl;
	for (int i = 0; i < 256; ++i)
	{
		cout << i << "->" << (char)i << "\t";
	}
	cout << endl;
	return EXIT_SUCCESS;
}