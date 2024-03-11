#include <iostream>
using namespace std;

int main() {
	int number, sum = 0;
	cout << "Nhap cac so : ";

	while (true) {
		cin >> number;
		if (number == 0) break;
		sum += number;
	}
	cout << "Tong 2 so la : " << sum << endl;
	return 0;
}
