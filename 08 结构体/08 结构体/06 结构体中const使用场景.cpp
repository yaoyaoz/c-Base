#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printStudent(const student * s)
{
	//s->age = 40;	//加入const之后，一旦有修改的操作就会报错，可以防止我们的误操作
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}

int main()
{
	struct student s = { "张三", 15, 70 };
	printStudent(&s);
	
	system("pause");
	return 0;
}
