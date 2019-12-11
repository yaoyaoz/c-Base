#include<iostream>
using namespace std;

//空指针调用成员函数

class Person
{
public:
	void showClassName()
	{
		//空指针也可以访问
		cout << "this is Person class" << endl;
	}

	void showPersonAge()
	{
		//空指针访问报错的原因：是因为传入的指针为NULL
		if (this == NULL) //预防传入空指针，增加程序的健壮性
		{
			return;
		}

		cout << "age = " << m_Age << endl;
	}

	int m_Age;

};

void test01()
{
	Person * p = NULL;
	p->showClassName();
	//p->showPersonAge();
}

int main()
{
	test01();

	system("pause");
	return 0;
}
