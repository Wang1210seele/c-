//zuoye3.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//1、定义一个矩形对象
	int leftX, leftY, newWidth, newHeight;
	Rectangle myRectangle(1, 2, 3, 4);

	//2、输出该对象的左上角坐标，宽，高，周长和面积
	cout << "例子：该对象的左上角坐标是：" << endl;
	myRectangle.getLeftTop().display();
	cout << "宽度:" << myRectangle.getWidth() << "高度:" << myRectangle.getHeight() << endl;
	cout << "周长:" << myRectangle.Circumference() << "面积:" << myRectangle.Area() << endl;
	while (1)
	{
		//3、修改该对象的左上角坐标，宽，高
		cout << "请输入矩形左上角的新坐标：x,y" << endl;
		cin >> leftX >> leftY;
		Point P(leftX, leftY);
		P.display();
		cout << "请输入矩形的宽和高：W,H" << endl;
		cin >> newWidth >> newHeight;
		myRectangle.setLeftTop(P);
		myRectangle.setWidth(newWidth);
		myRectangle.setHeight(newHeight);

		//4、输出该对象的左上角坐标，宽，高，周长和面积
		cout << "该对象的左上角坐标是：" << endl;
		myRectangle.getLeftTop().display();
		cout << "宽度:" << myRectangle.getWidth() << "高度:" << myRectangle.getHeight() << endl;
		cout << "周长:" << myRectangle.Circumference() << "面积:" << myRectangle.Area() << endl;
	}
	return 0;
}