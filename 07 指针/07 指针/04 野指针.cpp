#include<iostream>
using namespace std;

int main()
{
	/*
	野指针：指针变量指向非法的内存空间
	在程序中，尽量避免出现野指针
	*/

	//指针变量p指向内存地址编号为0x1100的空间
	int* p = (int*)0x1100;


	//访问野指针报错
	cout << *p << endl;

	system("pause");
	return 0;
}