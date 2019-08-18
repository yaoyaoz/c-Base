#include<iostream>
using namespace std;

int main() {
	/*
	float 4字节		有效数字范围：7位有效数字
	double 8字节	有效数字范围：15~16位有效数字
	默认情况下 输出一个小数，会显示出6位有效数字
	*/

	float f1 = 3.14159f;
	cout << "f1 = " << f1 << endl;

	double d1 = 3.14159;
	cout << "d1 = " << d1 << endl;

	double dd = 100;
	double ddd = 3;
	cout << dd / ddd << endl;

	//统计float和double占用内存空间
	cout << "float占用内存空间为：" << sizeof(float) << endl;
	cout << "double占用内存空间为：" << sizeof(double) << endl;

	//科学计数法（一般比较少用）
	float f2 = 3e2; //3 * 10^2
	cout << "f2 = " << f2 << endl;

	float f3 = 3e-2; //3 * 0.1^2
	cout << "f3 = " << f3 << endl;

	system("pause");
	return 0;
}