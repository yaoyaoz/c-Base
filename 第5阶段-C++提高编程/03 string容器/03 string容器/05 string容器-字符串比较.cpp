#include<iostream>
using namespace std;
#include<string>

//字符串比较
void test01()
{
	string str1 = "htllo";
	string str2 = "hello";

	if (str1.compare(str2) == 0)	//比较每一个字符的ASIIC码
	{
		cout << "str1 等于 str2" << endl;
	}
	else if (str1.compare(str2) > 0)
	{
		cout << "str1 大于 str2" << endl;
	}
	else
	{
		cout << "str1 小于 str2" << endl;
	}
}

int main()
{
	test01();

	system("pause");
	return 0;
}
