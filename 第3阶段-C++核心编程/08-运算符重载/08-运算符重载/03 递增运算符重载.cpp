#include<iostream>
using namespace std;

//重载递增运算符

//自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myInt);

public:
	MyInteger()
	{
		m_Num = 0;
	}

	//重载前置++运算符。返回引用是为了一直对一个数据进行递增操作
	MyInteger& operator++()
	{
		//先进行++运算
		m_Num++;

		//再将自身做返回
		return *this;
	}

	//重载后置++运算符
	//void operator++(int) int代表占位参数，可以用于区分前置和后置递增
	//后置不能返回引用，因为返回的temp是局部变量，调用完就释放了
	MyInteger operator++(int)
	{
		//先 记录当时结果
		MyInteger temp = *this;

		//后 递增
		m_Num++;

		//最后将记录结果返回
		return temp;
	}

private:
	int m_Num;
};

//重载<<运算符
ostream& operator<<(ostream& cout, MyInteger myInt)
{
	cout << myInt.m_Num;
	return cout;
}

void test01()
{
	MyInteger myInt;
	cout << ++(++myInt) << endl;
	cout << myInt << endl;//MyInteger& operator++() 如果不是返回的引用&，myInt就不会自增多次
}

void test02()
{
	MyInteger myInt;
	cout << myInt++ << endl;
	cout << myInt << endl;
}

int main()
{
	//test01();
	test02();

	system("pause");
	return 0;
}
