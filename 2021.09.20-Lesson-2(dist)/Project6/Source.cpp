#include<iostream>
#include<cmath>
#include<clocale>
#include<ctime>
#include<conio.h>

using namespace std;

int main(int argc, char* argv[])
{
	srand(time(0));

	setlocale(LC_ALL, "Russian");

	int a = 0;

	cin >> a;
	if (a == 1)
	{
		cout << "ÏÎÍÅÄÅËÜÍÈÊ-MONDAY" << endl;
	}
	else if (a == 2)
	{
		cout << "ÂÒÎÐÍÈÊ-TUESDAY" << endl;
	}

	cout << (a == 1 ? "MON" : a == 2 ? "TUE" : a == 3 ? "WED" :
		a == 4 ? "THU" : a == 5 ? "FRI" : a == 6 ? "SAT" : "SUN") << endl;

	switch (a)
	{
	case 1:
		cout << "MON" << endl;
		break;
	case 2:
		cout << "TUE" << endl;
		break;
	case 3:
		cout << "WED" << endl;
		break;
	case 4:
		cout << "THU" << endl;
		break;
	case 5:
		cout << "FRI" << endl;
		break;
	case 6:
		cout << "SAT" << endl;
		break;
	default:
		cout << "SUN" << endl;
		break;
	}

	system("pause");
	system("pause>nul");
	getch();

	return EXIT_SUCCESS;
}