#include<iostream>
using namespace std;

int main()
{
	/*
	指针和数组
	利用指针访问数组中的元素
	*/

	int arr[5] = {1, 2, 3, 4, 5};
	cout << "第一个元素为：" << arr[0] << " " << endl;

	int* p = arr;//arr就是数组首地址
	cout << "利用指针访问第一个元素：" << *p << endl;

	p++;//让指针向后偏移4个字节
	cout << "利用指针访问第二个元素：" << *p << endl;

	int* p2 = arr;
	cout << "利用指针遍历数组" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "数组第" << i << "个元素：" << *p2 << endl;
		p2++;
	}

	system("pause");
	return 0;
}
