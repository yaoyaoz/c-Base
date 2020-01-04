#include<iostream>
using namespace std;
#include<deque>

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//deque容器赋值操作
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	cout << "第一种赋值方式：" << endl;
	printDeque(d1);

	//operator= 赋值
	deque<int> d2;
	d2 = d1;
	cout << "\n第二种赋值方式：operator=" << endl;
	printDeque(d2);

	//assign赋值
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	cout << "\n第三种赋值方式：assign赋值" << endl;
	printDeque(d3);

	deque<int> d4;
	d4.assign(10, 100);	//10个100
	cout << "\n第四种赋值方式：" << endl;
	printDeque(d4);
}

int main()
{
	test01();

	system("pause");
	return 0;
}
