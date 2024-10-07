#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	if (input >= -100 && input <= 100 && input != 0) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}