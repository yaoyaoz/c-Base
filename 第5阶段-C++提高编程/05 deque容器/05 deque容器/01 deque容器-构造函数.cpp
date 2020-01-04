#include<iostream>
using namespace std;
#include<deque>

//deque 构造函数

/*
deque:双端数组，可以对头端进行插入操作

deque与vector的区别：
vector对于头部的插入删除效率低，，数据量越大，效率越低
deque相对而言，对头部的插入删除速度会比vector快
vector访问元素时的速度会比deque（中控器）快，，这和两者的内部实现有关
*/

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it = 100;	//加了常量 容器总的数据不可修改了
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	cout << "第一种构造deque的方式：" << endl;
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);

	cout << "\n第二种构造deque的方式：" << endl;
	deque<int> d2(d1.begin(), d1.end());
	printDeque(d2);

	cout << "\n第三种构造deque的方式：" << endl;
	deque<int> d3(10, 100); //10个100
	printDeque(d3);

	cout << "\n第四种构造deque的方式：拷贝构造" << endl;
	deque<int> d4(d3);
	printDeque(d4);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
