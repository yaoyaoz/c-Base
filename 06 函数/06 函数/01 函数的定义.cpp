#include<iostream>
using namespace std;

/*
函数的定义：
语法：
返回值类型 函数名(参数列表) { 函数体语句 return表达式 }
*/
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main() 
{
	int c = add(3, 5);
	cout << c << endl;

	system("pause");
	return 0;
}
