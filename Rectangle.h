#pragma once
#pragma once
//Rectangle.h头文件
#include <iostream>
#include "Point.h"
using namespace std;
class Rectangle
{
private:
	Point lefttop;
	double  Height = 0;
	double  Width = 0;
public:
	Rectangle(int x, int y, double w, double h);
	void setLeftTop(Point& p1);
	Point& getLeftTop();
	void setWidth(double num);
	double getWidth();
	void setHeight(double num);
	double getHeight();
	double Circumference();//周长
	double Area();
};