#include<iostream>
using namespace std;
#include<ctime>	//time系统时间头文件包含

int main() {
	cout << "请给电影打分：" << endl;

	int score = 0;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "您认为是10分电影" << endl;
		break;
	case 9:
		cout << "您认为是9分电影" << endl;
		break;
	default:
		cout << "您认为这是烂片" << endl;
	}

	/*
	if和switch区别：
	switch缺点：判断的时候只能是整型或者字符型，不可以是一个区间
	switch优点：结构清晰，执行效率高

	*/


	//添加随机数种子 利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	int va1 = rand();
	cout << "生成随机数：" << va1 << endl;

	system("pause");
	return 0;
}
