#include<iostream>
#include<string>
#include<clocale>
using namespace std;

int main(int argc, char* argv[])
{
	string str;
	getline(cin, str);
	cout << str.length() << endl;
	cout << str.append(" banana") << endl;
	string str1 = "barabana";
	str += " " + str1;
	cout << str << endl;
	cout << str.c_str() << endl;
	cout << str.insert(5, " hello ") << endl;
	cout << str.find('a', 10) << endl;
	cout << stoi("123") + stoi("435") << endl;
	cout << "parsing number : ";
	cin >> str;
	int num = 0;
	int i = 0;
	while (str[i] != '\0')
	{
		num = num * 10 + str[i] - '0';
		++i;
	}
	cout << num;
	return EXIT_SUCCESS;
}