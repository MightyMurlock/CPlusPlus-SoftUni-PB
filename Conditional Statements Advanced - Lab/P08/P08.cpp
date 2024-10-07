#include <iostream>
using namespace std;

int main() {
	string input;
	int output;
	cin >> input;

	if (input == "Monday" || input == "Tuesday" || input == "Friday") {
		output = 12;
	}
	else if (input == "Wednesday" || input == "Thursday") {
		output = 14;
	}
	else {
		output = 16;
	}

	cout << output << endl;
}