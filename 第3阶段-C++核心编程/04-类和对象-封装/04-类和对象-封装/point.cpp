#include "point.h"

void Point::setX(int x) //加个作用域Point::	就是成员函数了
{
	m_X = x;
}
int Point::getX()
{
	return m_X;
}
void Point::setY(int y)
{
	m_Y = y;
}
int Point::getY()
{
	return m_Y;
}

