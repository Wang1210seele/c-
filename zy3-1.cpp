//zuoye3.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	//1������һ�����ζ���
	int leftX, leftY, newWidth, newHeight;
	Rectangle myRectangle(1, 2, 3, 4);

	//2������ö�������Ͻ����꣬���ߣ��ܳ������
	cout << "���ӣ��ö�������Ͻ������ǣ�" << endl;
	myRectangle.getLeftTop().display();
	cout << "���:" << myRectangle.getWidth() << "�߶�:" << myRectangle.getHeight() << endl;
	cout << "�ܳ�:" << myRectangle.Circumference() << "���:" << myRectangle.Area() << endl;
	while (1)
	{
		//3���޸ĸö�������Ͻ����꣬����
		cout << "������������Ͻǵ������꣺x,y" << endl;
		cin >> leftX >> leftY;
		Point P(leftX, leftY);
		P.display();
		cout << "��������εĿ�͸ߣ�W,H" << endl;
		cin >> newWidth >> newHeight;
		myRectangle.setLeftTop(P);
		myRectangle.setWidth(newWidth);
		myRectangle.setHeight(newHeight);

		//4������ö�������Ͻ����꣬���ߣ��ܳ������
		cout << "�ö�������Ͻ������ǣ�" << endl;
		myRectangle.getLeftTop().display();
		cout << "���:" << myRectangle.getWidth() << "�߶�:" << myRectangle.getHeight() << endl;
		cout << "�ܳ�:" << myRectangle.Circumference() << "���:" << myRectangle.Area() << endl;
	}
	return 0;
}