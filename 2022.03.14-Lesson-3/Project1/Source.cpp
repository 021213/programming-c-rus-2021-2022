#include<iostream>
using namespace std;

struct Point {
private:
	int x;
	int y;

public:
	Point(int x = 0, int y = 0) : x(x + y), y(x - y) {}

	Point(Point& point) : Point(point.getX(), point.getY()) {}
		
	~Point()
	{
		x = 0;
		y = 0;
	}

	void print()
	{
		cout << "(" << this->getX() << "; " << this->getY() << ")" << endl;
	}

	double abs()
	{
		return sqrt(this->getX() * this->getX() + this->getY() * this->getY());
	}

	void set(int x, int y)
	{
		this->x = x + y;
		this->y = x - y;
	}

	int getX()
	{
		return (x + y) / 2;
	}

	void setX(int x)
	{
		set(x, this->getY());
	}

	int getY()
	{
		return (x - y) / 2;
	}

	void setY(int y)
	{
		set(this->getX(), y);
	}

	friend int sumOfCoordinates(Point point);
};

int main()
{
	Point p(4, 2);
	p.print();
	p.setX(5);
	p.print();

	cout << sumOfCoordinates(p);

	return 0;
}

int sumOfCoordinates(Point point)
{
	return point.x + point.y;
}
