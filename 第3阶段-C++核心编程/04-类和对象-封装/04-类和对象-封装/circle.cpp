#include "circle.h"

void Circle::setR(int r)  //加个作用域Circle::	就是成员函数了
{
	m_R = r;
}
int Circle::getR()
{
	return m_R;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}
Point Circle::getCenter()
{
	return m_Center;
}
