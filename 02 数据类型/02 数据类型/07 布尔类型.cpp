#include<iostream>
using namespace std;

int main() {
	//1、创建bool数据类型
	bool flag = true; //true代表真
	cout << "flag：" << flag << endl;

	flag = false;	//false代表假
	cout << "flag：" << flag << endl;

	//本质上 1代表真 0代表假

	cout << "size of bool = " << sizeof(bool) << endl;

	system("pause");
	return 0;
}
/*
输出：
flag：1
flag：0
size of bool = 1
*/