#include<iostream>
using namespace std;

int main() {

	for (int i = 1; i <= 100; i++) {
		int geWei = i % 10;
		int shiWei = i / 10 % 10;
		if (geWei == 7 || shiWei == 7 || i % 7 == 0){
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}