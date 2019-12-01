#include<iostream>
using namespace std;

/*
构造函数的分类及调用
分类：
	按照参数分类：无参构造、有参构造
	按照类型分类：普通构造、拷贝构造
*/

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数调用" << endl;
	}
	Person(int a)
	{
		cout << "Person的有参构造函数调用" << endl;
		age = a;
	}
	//拷贝构造函数
	Person(const Person &p)
	{
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "Persion的拷贝构造函数调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数调用" << endl;
	}

	int age;
};

//调用
void test01()
{
	//1、括号法（常用）
	cout << "括号法：" << endl;
	Person p1;	//默认构造函数调用
	Person p2(10);
	Person p3(p2);	//拷贝构造函数

	cout << "p2的年龄为：" << p2.age << endl;
	cout << "p3的年龄为：" << p3.age << endl;

	/*
	注意事项1：
	调用默认构造函数的时候，不要加()
	因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
	*/
	//Person p1();	//声明，类似 void func();

	//2、显示法
	cout << "\n显示法：" << endl;
	Person p5;
	Person p6 = Person(15);	//有参构造
	Person p7 = Person(p6); //拷贝构造

	Person(13);	//匿名对象。特点：当前执行结束后，系统会立即回收掉匿名对象（马上析构）
	cout << "Person(13);执行完后，系统立即回收掉匿名对象" << endl;

	/*
	注意事项2：
	不要利用拷贝构造函数 初始化匿名对象。编译器会认为Person(p7) == Person p7; p3前面已经声明
	*/
	//Person(p7);

	//3、隐式转换法
	Person p10 = 26;	//相当于写了 Person p10 = Person(26);	//有参构造
	Person p11 = p10;	//拷贝构造 Person p11 = Person(p10);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
