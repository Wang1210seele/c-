#pragma once
// Point.h
#include <iostream>
using namespace std;

//��ľۼ�
class Point	//Point�ඨ��
{
public:
	Point(int xx, int yy);
	Point(Point& p);
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();
	void display();
private:
	int X = 0, Y = 0;
};