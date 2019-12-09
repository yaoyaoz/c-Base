#include<iostream>
using namespace std;

//成员变量 和 成员函数 是分开存储的

class Person
{
	
};

class Person2
{
	int m_A; //非静态成员变量
};

class Person3
{
	int m_A; //非静态成员变量 属于类的对象上

	static int m_B; //静态成员变量 不属于类对象上

	void func() {} //非静态成员函数 不属于类对象上

	static void func2() {}	//静态成员函数 不属于类的对象上
};
int Person3::m_B = 0;

void test01()
{
	Person p;

	/*
	空对象占用内存空间为：1个字节
	c++编译器会给每个空间对象也分配一个字节空间，是为了区分空对象占内存的位置。
	每个空对象也应该有一个独一无二的内存地址
	*/
	cout << "size of p = " << sizeof(p) << endl;

	Person2 p2;
	/*
	4个字节
	*/
	cout << "size of p2 = " << sizeof(p2) << endl;

	//4个字节：相当于加了静态成员变量、非静态成员函数、静态成员函数都没有增加类占用的内存空间。
	Person3 p3;
	cout << "size of p3 = " << sizeof(p3) << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
