#include<iostream>
using namespace std;
#include<vector>

void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	cout << "利用[]方式访问数组中的元素====>" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;

	cout << "\n利用at方式访问元素====>" << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
	cout << endl;

	cout << "\n获取第一个元素为：" << v1.front() << endl;

	cout << "\n获取最后一个元素为：" << v1.back() << endl;
}

int main()
{
	test01();

	system("pause");
	return 0;
}
