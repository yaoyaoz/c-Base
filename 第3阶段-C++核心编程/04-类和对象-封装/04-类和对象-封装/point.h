#pragma once //防止头文件重复包含
#include<iostream>
using namespace std;

class Point
{
public:
	void setX(int x);	//声明
	int getX();
	void setY(int y);
	int getY();

private:
	int m_X;
	int m_Y;
};
