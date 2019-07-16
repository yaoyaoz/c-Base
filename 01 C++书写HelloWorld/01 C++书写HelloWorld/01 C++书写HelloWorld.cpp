#include<iostream>
using namespace std;

//单行注释
/* 
多行注释
*/

//1、#define 宏常量
#define Day 7

/*
	main是一个程序的入口
	每个程序都必须有这么一个函数
	有且仅有一个
*/
int main()
{
	//在屏幕中输出hello C++
	cout << "hello C++" << endl;

	int a = 10;
	cout << "a = " << a << endl;

	//Day = 14; //错误，Day是常量，一旦修改就会报错
	cout << "一周总共有：" << Day << " 天" << endl;

	//2、const修饰的变量
	const int month = 12;
	//month = 16; //错误，const修饰的变量也称为常量
	cout << "一年总共有" << month << " 个月" << endl;

	system("pause");
	return 0;
}
