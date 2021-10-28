#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	cin >> a;
	
	if (a == 1) cout << "MON";
	if (a == 2) cout << "TUE";
	if (a == 3) cout << "WED";
	if (a == 4) cout << "THU";
	if (a == 5) cout << "FRI";
	if (a == 6) cout << "SAT";
	if (a == 7) cout << "SUN";

	cout << (a == 1 ? "MON" : a == 2 ? "TUE" : a == 3 ? "WED" :
		a == 4 ? "THU" : a == 5 ? "FRI" : a == 6 ? "SAT" : "SUN");

	switch (a % 7)
	{
	case 1:
		cout << "MON";
		break;
	case 2:
		cout << "TUE";
		break;
	case 3:
		cout << "WED";
		break;
	case 4:
		cout << "THU";
		break;
	case 5:
		cout << "FRI";
		break;
	case 6:
		cout << "SAT";
		break;
	default:
		cout << "SUN";
	}
	return EXIT_SUCCESS;
}