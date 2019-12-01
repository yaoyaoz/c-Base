#include<iostream>
using namespace std;

/*
立方体设计：
分别利用全局函数和成员函数 判断两个立方体是否相等
*/
class Cube
{
private:
	int m_L; //长
	int m_W; //宽
	int m_H; //高
public:
	void setL(int l)
	{
		m_L = l;
	}

	int getL()
	{
		return m_L;
	}

	void setW(int w)
	{
		m_W = w;
	}

	int getW()
	{
		return m_W;
	}

	void setH(int h)
	{
		m_H = h;
	}

	int getH()
	{
		return m_H;
	}

	int calculateS()
	{
		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
	}

	int calculateV()
	{
		return m_L * m_W * m_H;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByClass(Cube &c)
	{
		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
		{
			cout << "成员函数判断：c1和c2相等" << endl;
			return true;
		}
		else
		{
			cout << "成员函数判断：c1和c2不相等" << endl;
			return false;
		}
	}

};

//利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Cube c1;
	c1.setL(10);
	c1.setW(20);
	c1.setH(30);
	cout << "c1的面积为：" << c1.calculateS() << endl;
	cout << "c1的体积为：" << c1.calculateV() << endl;

	Cube c2;
	c1.setL(10);
	c1.setW(20);
	c1.setH(40);
	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "全局函数判断：c1和c2相等" << endl;
	}
	else
	{
		cout << "全局函数判断：c1和c2不相等" << endl;
	}

	c1.isSameByClass(c2);

	system("pause");
	return 0;
}
