#include<iostream>
using namespace std;

class Person
{
	//友元
	friend ostream& operator<<(ostream &cout, Person p);

public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}

private:

	//利用成员函数重载：左移运算符	p.operator<<(cout) 简化版本p<<cout
	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
	/*void operator<<(cout)
	{

	}*/

	int m_A;
	int m_B;
};

//只能利用全局函数重载左侧运算符
ostream& operator<<(ostream &cout, Person p) //本质 operator<<(cout, p) 简化cout << p
{
	cout << "m_A = " << p.m_A << ", m_B = " << p.m_B;
	return cout;
}

void test01()
{
	Person p(10, 10);

	cout << p << ",,,hello world" << endl; //链式编程
}

int main()
{
	test01();

	system("pause");
	return 0;
}
