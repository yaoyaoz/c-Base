#include<iostream>
using namespace std;

int main() {

	int num = 100;
	do {
		int baiWei = num / 100;
		int shiWei = num / 10 % 10;
		int geWei = num % 10;
		
		if ((baiWei * baiWei * baiWei + shiWei * shiWei * shiWei + geWei * geWei * geWei) == num) {
			cout << "Ë®ÏÉ»¨Êý£º" << num << endl;
		}
		num++;
	} while (num >= 100 && num < 1000);

	system("pause");
	return 0;
}