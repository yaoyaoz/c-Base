#include<iostream>
using namespace std;

class C1
{
	int m_A;	//默认权限：私有
};

struct C2
{
	int m_A;	//默认权限：公共
};

int main()
{
	C1 c1;
	//c1.m_A;	//class默认的权限为：私有，所以访问不了

	C2 c2;
	c2.m_A = 100;	//在struct默认的权限为：公共，所以可以访问

	system("pause");
	return 0;
}
