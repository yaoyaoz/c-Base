#include<iostream>
using namespace std;

//冒泡排序
void bubbleSort(int * arr, int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printArray(int * arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	//1、先创建数组
	int arr[10] = { 6, 8, 9, 4, 10, 1, 2, 3, 5, 7 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[0]);

	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);

	//3、打印排序后的数组
	printArray(arr, len);

	system("pause");
	return 0;
}