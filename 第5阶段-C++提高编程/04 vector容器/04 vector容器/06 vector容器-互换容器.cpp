#include<iostream>
using namespace std;
#include<vector>

//vector容器互换：swap

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//1、基本使用
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	cout << "交换前v1====>" << endl;
	printVector(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	cout << "交换前v2====>" << endl;
	printVector(v2);

	//容器互换
	v1.swap(v2);
	cout << "\n交换后v1=>" << endl;
	printVector(v1);
	cout << "交换后v2=>" << endl;
	printVector(v2);
}

//2、实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);
	}
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	v.resize(3);	//重新指定大小
	cout << "重新指定大小为3后，容量并没有变小=>" << endl;
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;

	/*
	巧用swap收缩内存：
	vector<int>(v)	匿名对象x
	x.swap(v);  x（小容量）和v互换（大容量），互换后v就成小容量了，匿名对象x在当前行执行完后系统会自动回收
	*/
	vector<int>(v).swap(v);
	cout << "巧用swap收缩内存=>" << endl;
	cout << "v的容量为：" << v.capacity() << endl;
	cout << "v的大小为：" << v.size() << endl;
}

int main()
{
	cout << "test01======================>" << endl;
	test01();
	
	cout << "\ntest02======================>" << endl;
	test02();

	system("pause");
	return 0;
}
