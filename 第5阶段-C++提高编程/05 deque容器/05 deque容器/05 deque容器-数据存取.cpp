#include<iostream>
using namespace std;
#include<deque>

//deque容器的数据存取

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
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);

	cout << "通过[]方式访问元素" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << " ";
	}
	cout << endl;

	cout << "\n通过at方式访问元素" << endl;
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << " ";
	}
	cout << endl;

	cout << "\n第一个元素为：" << d.front() << endl;
	cout << "\n最后一个元素为：" << d.back() << endl;

}

int main()
{
	test01();

	system("pause");
	return 0;
}
