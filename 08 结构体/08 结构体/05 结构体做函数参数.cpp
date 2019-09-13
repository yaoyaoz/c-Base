#include<iostream>
using namespace std;
#include<string>

//定义学生结构体
struct student
{
	string name;
	int age;
	int scoure;
};

//打印学生信息的函数
void printStudent1(struct  student s)
{
	s.name = "王五";
	cout << "printStudent1中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.scoure << endl;
}

void printStudent2(struct student * p)
{
	p->scoure = 90;
	cout << "printStudent2中打印 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->scoure << endl;
}

int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.scoure = 85;

	printStudent1(s);
	printStudent2(&s);
	cout << "main函数中打印 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.scoure << endl;

	system("pause");
	return 0;
}
