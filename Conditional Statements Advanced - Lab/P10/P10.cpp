#include <iostream>
using namespace std;

int main() {
	int input;
	cin >> input;

	if (!(input >= 100 && input <= 200 || input == 0)) {
		cout << "invalid" << endl;
	}
}