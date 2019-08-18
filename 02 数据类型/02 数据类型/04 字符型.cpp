#include<iostream>
using namespace std;

int main() {
	//1、字符型变量创建方式
	char ch = 'a';
	cout << "ch = " << ch << endl;

	//2、char 字符型变量只占用1个字节
	cout << "char字符型变量所占内存：" << sizeof(char) << endl;

	//3、字符型变量常见错误
	//char ch2 = "d";	//创建字符型变量的时候，要用单引号
	//char ch2 = 'abcdef'; //创建字符型变量的时候，单引号内只能有一个字符

	/*
	4、字符型变量对应ASCII编码	字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元
	a - 97
	A - 65

	*/
	cout << "int(ch) = " << (int)ch << endl;

	system("pause");
	return 0;
}