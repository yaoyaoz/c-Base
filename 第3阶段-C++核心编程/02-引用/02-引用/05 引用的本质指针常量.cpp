#include<iostream>
using namespace std;

/*
引用的本质：就是一个个指针常量
引用一旦初始化后，就不可以发生改变（应该是在说引用的地方不可以发生改变）
*/
int main()
{
	int a = 10;

	//自动转换为 int* const ref = &a；指针常量是指指针指向不可改，也说明为什么引用不可更改
	int& ref = a;
	ref = 20;	//内部发现ref是引用，，自动帮我们转换为：*ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	system("pause");
	return 0;
}
