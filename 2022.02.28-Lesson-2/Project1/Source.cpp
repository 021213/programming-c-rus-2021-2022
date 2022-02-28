#include<iostream>
#include<cstdlib>

using namespace std;

struct Point {
	int x;
	int y;
};

int main()
{
	int x1 = 0;
	int y1 = 0;
	int x2 = 0;
	int y2 = 0;
	int x3 = 0;
	int y3 = 0;

	int x[10]{ 0 };
	int y[10]{ 0 };

	Point point;
	point.x = 45;
	point.y = 74;

	const int n = 0;
	Point points[10]{ 0 };
	for (int i = 0; i < 10; ++i)
	{
		points[i].x = rand() % 10;
		points[i].y = rand() % 10;
	}
	for (int i = 0; i < 10; ++i)
	{
		cout << "(" << points[i].x << "; " << points[i].y << ")" << endl;
	}

	return EXIT_SUCCESS;
}