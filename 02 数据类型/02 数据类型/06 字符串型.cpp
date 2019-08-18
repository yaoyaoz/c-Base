#include<iostream>
using namespace std;
#include<string>	//用C++风格字符串的时候，要包含这个头文件

int main() {
	//1、C风格字符串
	char str[] = "hello world";
	cout << "str:" << str << endl;

	/*
	2、C++风格字符串
	要包含头文件#include<string>
	*/
	string str1 = "hello world haha";
	cout << "str1：" << str1 << endl;

	system("pause");
	return 0;
}