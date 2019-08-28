#include<iostream>
using namespace std;

int main() {
	int arr[3];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;

	int arr2[3] = { 100, 200, 300};
	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;

	int arr3[] = {90, 30};
	cout << arr3[0] << endl;
	cout << arr3[1] << endl;

	system("pause");
	return 0;
}