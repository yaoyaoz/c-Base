#include<iostream>
using namespace std;

int main() {
	//与while的区别在于do...while会先执行一次循环语句，再判断循环条件
	int num = 12;
	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	system("pause");
	return 0;
}