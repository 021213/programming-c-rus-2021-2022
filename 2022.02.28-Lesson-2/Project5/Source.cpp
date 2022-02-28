#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<clocale>
#include<ctime>
#include<cmath>
#include<cstring>
#define PI 3.1415926535

using namespace std;

struct Point {
	//поля
	double x;
	double y;

	//конструктор
	Point(double x = 0, double y = 0) : x(x), y(y) {} //конструктор с инициализаторами
	
	Point(Point& point) : Point(point.x, point.y) {}
	
	//деструктор
	~Point()
	{
		x = 0;
		y = 0;
	}

	//методы
	void print()
	{
		cout << "(" << x << "; " << y << ")" << endl;
	}
	double abs()
	{
		return sqrt(x * x + y * y);
	}
};

double dotProduct(Point vectorA, Point vectorB)
{
	return vectorA.x * vectorB.x + vectorA.y * vectorB.y;
}

double angle(Point vectorA, Point vectorB)
{
	return acos(dotProduct(vectorA, vectorB) / vectorA.abs() / vectorB.abs()) / PI * 180;
}

int main()
{
	Point p1;
	p1.x = 10;
	p1.y = 15;

	Point p2(4, 5);

	p1.print();
	p2.print();

	cout << angle(p1, p2);

	return EXIT_SUCCESS;
}