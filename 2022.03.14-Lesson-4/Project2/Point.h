#pragma once
#include<iostream>
#include<cmath>

class Point {
private:
	int x;
	int y;

public:
	static int count;

	Point(int x = 0, int y = 0) : x(x + y), y(x - y) { ++count; }

	Point(Point& point) : Point(point.getX(), point.getY()) {}

	~Point();

	void print();

	double abs();

	void set(int x, int y);

	int getX();

	void setX(int x);

	int getY();

	void setY(int y);
};


