#include<iostream>
using namespace std;
#include<string>

//结构体指针
struct student
{
	string name;
	int age;
	int score;
};

int main()
{
	//1、创建学生结构体变量
	student s = { "张三", 18, 100 };

	//2、通过指针指向结构体变量
	student * p = &s;

	//3、通过指针访问结构体变量中的数据
	//通过结构体指针 访问 结构体中的属性，需要利用'->'
	cout << "姓名：" << p->name
		 << " 年龄：" << p->age
		 << " 分数：" << p->score << endl;

	system("pause");
	return 0;
}
