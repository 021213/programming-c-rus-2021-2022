#include<iostream>
#include<cstdlib>

using namespace std;

struct Point {
	//поля
	int x;
	int y;

	//конструктор
	Point() //конструктор по умолчанию (без параметров)
	{
		x = 0;
		y = 0;
	}
	Point(int xx, int yy) //параметризованный конструктор
	{
		x = xx;
		y = yy;
	}
	Point(Point& point) //конструктор копирования
	{
		x = point.x;
		y = point.y;
	}
	~Point()
	{
		x = 0;
		y = 0;
	}
};

void print(Point point)
{
	cout << "(" << point.x << "; " << point.y << ")" << endl;
}

int main()
{
	Point p1;
	p1.x = 10;
	p1.y = 15;

	Point p2(4, 5);

	print(p1);
	print(p2);

	return EXIT_SUCCESS;
}