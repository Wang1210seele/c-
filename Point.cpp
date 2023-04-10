//Point.cpp类的实现
#include <iostream>
#include "Point.h"
using namespace std;
//补充Point类的实现
Point::Point(int xx, int yy)
{
	X = xx;
	Y = yy;
}

Point::Point(Point& p)
{
	X = p.X;
	Y = p.Y;
}

int Point::GetX()
{
	return X;
}

int Point::GetY()
{
	return Y;
}

void Point::SetX(int x)
{
	X = x;
}

void Point::SetY(int y)
{
	Y = y;
}
void Point::display()
{
	cout << '(' << X << ',' << Y << ')' << endl;
}