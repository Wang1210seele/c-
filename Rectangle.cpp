//Rectangle.cpp���ʵ��
#include <iostream>
#include "Rectangle.h"
using namespace std;
//����Rectangle���ʵ��

Rectangle::Rectangle(int x, int y, double w, double h) :lefttop(x, y)
{
	Height = h;
	Width = w;
}
void Rectangle::setLeftTop(Point& p1)
{
	lefttop.SetX(p1.GetX());
	lefttop.SetY(p1.GetY());
}

Point& Rectangle::getLeftTop()
{
	return lefttop;
}
void Rectangle::setWidth(double num)
{
	Width = num;
}

double Rectangle::getWidth()
{
	return Width;
}

void Rectangle::setHeight(double num)
{
	Height = num;
}

double Rectangle::getHeight()
{
	return Height;
}

double Rectangle::Circumference()//�ܳ�
{
	return 2 * (Height + Width);
}

double Rectangle::Area()
{
	return Height * Width;
}