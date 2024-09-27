#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int input;
	cin >> input;

	if (input < 100) {
		cout << "Less than 100" << endl;
	}
	else if (input >= 100 && input <= 200) {
		cout << "Between 100 and 200" << endl;
	}
	else {
		cout << "Greater than 200" << endl;
	}
}