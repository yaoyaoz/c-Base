#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;
#include "point.h"

class Circle
{
public:
	void setR(int r);	//声明
	int getR();
	void setCenter(Point center);
	Point getCenter();

private:
	int m_R;		//半径
	Point m_Center; //圆心
};
