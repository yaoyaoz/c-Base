#include<iostream>
using namespace std;

//类对象作为类成员

class Phone
{
public:
	Phone(string pName)
	{
		cout << "Phone的构造函数" << endl;
		m_PName = pName;
	}
	~Phone()
	{
		cout << "Phone的析构函数" << endl;
	}

	string m_PName;
};

class Person
{
public:
	Person(string name, string pName) : m_Name(name), m_Phone(pName)
	{
		cout << "Person的构造函数" << endl;
	}
	~Person()
	{
		cout << "Person的析构函数" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

/*
当其他类对象作为本类成员，构造时候先构造类对象，再构造自身。
析构的顺序：与构造相反
*/

void test01()
{
	Person p("张三", "vivo x20");
}

int main()
{
	test01();

	system("pause");
	return 0;
}
