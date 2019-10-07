using namespace std;
#include<string>

/*
需求：
设计一个英雄的结构体，包括成员姓名，年龄，性别；创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
*/

struct Hero
{
	string name;
	int age;
	string sex;
};

void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (heroArray[j].age < heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}

		}
	}
}

int main()
{
	struct Hero heroArray[5] =
	{
		{ "张三", 24, "男" },
		{ "李四", 18, "女" },
		{ "王五", 16, "男" },
		{ "周六", 25, "女" },
		{ "王一", 23, "男" }
	};

	//按年龄排序
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubbleSort(heroArray, len);

	//打印排序后的数组
	//...略...

	system("pause");
	return 0;
}
