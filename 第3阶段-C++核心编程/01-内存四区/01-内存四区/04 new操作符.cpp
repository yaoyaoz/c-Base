#include<iostream>
using namespace std;

//1、new的基本语法
int * func()
{
	//在堆区创建整型数据
	//new返回的是 该数据类型的指针
	int * p = new int(10);
	return p;
}

void test01()
{
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	/*
	堆区的数据 由程序员管理开辟，程序员管理释放
	如果想释放堆区的数据，利用关键字delete
	*/
	//delete p;
	//cout << *p << endl; //内存已经被释放，再次访问就是非法操作，会报错
}

//2、在堆区利用new开辟数组
int * test02()
{
	//创建10整型数据，在堆区
	int * arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 100; //给10个元素赋值	100~109
	}
	/*
	释放堆区数据
	释放数组的时候，要加[]才可以
	*/
	//delete[] arr; //内存已经被释放，main再次访问就是非法操作，会报错
	return arr;
}

int main()
{
	//test01();
	int * arr = test02();
	cout << "第1次取堆区的数组：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "第2次取堆区的数组：" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	system("pause");
	return 0;
}
