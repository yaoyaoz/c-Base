#include<iostream>
using namespace std;

int main() {
	//1、短整型 2字节	-2的15次方~(2的15次方)-1	-32768~32767
	short num1 = -32770;

	//2、整型 4字节
	int num2 = 10;

	//3、长整型 windows为4字节，linux为4字节（32位），8字节（64位
	long num3 = 10;

	//4、长长整型 8字节
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");
	return 0;
}
