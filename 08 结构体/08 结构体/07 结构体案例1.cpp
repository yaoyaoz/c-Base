#include<iostream>
using namespace std;
#include<string>
#include<ctime>

struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string name;
	struct Student sArray[5];
};

//给老师和学生赋值的函数
void allocateSpace(struct  Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 3; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];

		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];

			int random = rand() % 60 + 40; //rand() % 60【0~59】	再加个40，范围就是【40~99】
			tArray[i].sArray[j].score = random;
		}
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名：" << tArray[i].sArray[j].name << " 考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}

int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));

	//1、创建3名老师的数组
	struct Teacher tArray[3];

	//2、通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocateSpace(tArray, len);

	//3、打印所有老师及所带的学生信息
	printInfo(tArray, len);

	system("pause");
	return 0;

}