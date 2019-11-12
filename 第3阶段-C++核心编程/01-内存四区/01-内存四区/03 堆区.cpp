#include<iostream>
using namespace std;

int * func()
{
	//利用new关键字，可以将数据开辟到堆区
	//指针 本质也是局部变量，放在栈上，指针保持的数据是放在堆区
	int * p = new int(10);
	return p;
}

int main()
{
	//在堆区开辟数据
	int *p = func();

	cout << *p << endl;
	cout << *p << endl;//第二次访问，数据也不会释放（若程序员不能释放，程序结束时由操作系统回收）
	cout << *p << endl;

	system("pause");
	return 0;
}
