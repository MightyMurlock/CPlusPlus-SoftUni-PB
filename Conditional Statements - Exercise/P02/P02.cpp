#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int number;
	cin >> number;

	double bonus = 0;

	if (number <= 100) {
		bonus += 5;
	}
	else if (number > 100 && number <= 1000) {
		bonus += 0.2 * number;
	}
	else if (number > 1000) {
		bonus += 0.1 * number;
	}

	if (number % 2 == 0) {
		bonus += 1;
	}
	else if (number % 5 == 0) {
		bonus += 2;
	}

	cout << bonus << endl;
	cout << bonus + number << endl;
}