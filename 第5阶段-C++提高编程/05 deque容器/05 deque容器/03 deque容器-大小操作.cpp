#include<iostream>
using namespace std;
#include<deque>

/*
deque容器大小操作：
跟vector容器不一样的地方：deque没有容量的概念，因为它的内部结构中，没有容量的限制，可以往前后无限的开通
*/

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	printDeque(d1);
	
	if (d1.empty())
	{
		cout << "d1为空" << endl;
	}
	else
	{
		cout << "d1不为空" << endl;
		cout << "d1的大小为：" << d1.size() << endl;
		//deque容器没有容量的概念
	}

	//重新指定大小
	d1.resize(15);
	printDeque(d1);		//默认用0填充
	d1.resize(20, 1);	//用1填充
	printDeque(d1);

	d1.resize(5);
	printDeque(d1);

}

int main()
{
	test01();

	system("pause");
	return 0;
}
