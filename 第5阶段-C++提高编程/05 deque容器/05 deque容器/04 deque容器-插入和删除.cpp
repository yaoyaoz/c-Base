#include<iostream>
using namespace std;
#include<deque>

//deque容器的插入和删除

void printDeque(deque<int>& d)
{
	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//两端操作
void test01()
{
	deque<int> d1;

	//尾插
	d1.push_back(10);
	d1.push_back(20);

	//头插
	d1.push_front(100);
	d1.push_front(200);
	
	cout << "遍历d1=>" << endl;
	printDeque(d1);

	//尾删
	cout << "\n尾删=>" << endl;
	d1.pop_back();
	printDeque(d1);

	//头删
	cout << "\n头删=>" << endl;
	d1.pop_front();
	printDeque(d1);
}

void test02()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_front(100);
	d1.push_front(200);
	cout << "遍历d1=>" << endl;
	printDeque(d1);

	//insert
	d1.insert(d1.begin(), 1000);	//在头部插入1000
	d1.insert(d1.begin(), 2, 10000);	//在头部插入2个10000
	cout << "\n在d1头部插入=>" << endl;
	printDeque(d1);

	//按照区间进行插入
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);

	d1.insert(d1.begin(), d2.begin(), d2.end());
	cout << "\n在d1头部插入d2的从头到尾=>" << endl;
	printDeque(d1);
}

void test03()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	cout << "遍历d1=>" << endl;
	printDeque(d1);
	
	//删除
	deque<int>::iterator it = d1.begin();
	it++;
	cout << "\n删除d1的第二个元素=>" << endl;
	d1.erase(it);
	printDeque(d1);

	//cout << "\n按区间方式删除=>" << endl;
	//d1.erase(d1.begin(), d1.end());
	//printDeque(d1);

	cout << "\n清空=>" << endl;
	d1.clear();
	printDeque(d1);
}

int main()
{
	cout << "test01======================>" << endl;
	test01();
	cout << "\ntest02======================>" << endl;
	test02();
	cout << "\ntest03======================>" << endl;
	test03();

	system("pause");
	return 0;
}
