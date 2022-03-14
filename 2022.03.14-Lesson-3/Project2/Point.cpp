#include "Point.h"

Point::~Point()
{
	x = 0;
	y = 0;
}

void Point::print()
{
	std::cout << "(" << this->getX() << "; " << this->getY() << ")" << std::endl;
}

double Point::abs()
{
	return sqrt(this->getX() * this->getX() + this->getY() * this->getY());
}

void Point::set(int x, int y)
{
	this->x = x + y;
	this->y = x - y;
}

int Point::getX()
{
	return (x + y) / 2;
}

void Point::setX(int x)
{
	set(x, this->getY());
}

int Point::getY()
{
	return (x - y) / 2;
}

void Point::setY(int y)
{
	set(this->getX(), y);
}
