#include<iostream>
#include<string>

using namespace std;

int main(int argc, char* argv[])
{
	string str;
	str = "12453";
	cout << str << endl;
	str[0] = 'a';
	str[1] = 'b';
	cout << str << endl;

	cin >> str;
	cout << str << endl;

	getline(cin, str);
	cout << str << endl;

	char strc[10];
	cin.getline(strc, 10);
	cout << strc << endl;

	return EXIT_SUCCESS;
}