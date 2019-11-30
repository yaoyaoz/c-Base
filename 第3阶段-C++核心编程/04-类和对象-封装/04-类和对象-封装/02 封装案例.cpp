#include<iostream>
using namespace std;
#include<string>

//设计一个学生类
class Student
{
public:

	/*
	类中的属性和行为 我们通过以称为 成员
	属性	成员属性 成员变量
	行为	成员函数 成员方法
	*/

	string m_Name;
	int m_Id;

	void showStudent()
	{
		cout << "姓名：" << m_Name << " 学号：" << m_Id << "" << endl;
	}

	void setName(string name)
	{
		m_Name = name;
	}
};

int main()
{
	Student s1;
	s1.m_Name = "张三";
	s1.m_Id = 1;
	s1.showStudent();

	Student s2;
	s2.setName("王五");
	s2.showStudent();

	system("pause");
	return 0;
}
