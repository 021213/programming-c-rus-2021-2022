#include<iostream>
#include"Point.h"

using namespace std;

int Point::count;

int main()
{
	cout << Point::count << endl;
	Point p(4, 2);
	p.print();
	p.setX(5);
	p.print();
	cout << Point::count << endl;
	Point p2;
	cout << Point::count << endl;
	Point p3[10];
	cout << Point::count << endl;


	return 0;
}
