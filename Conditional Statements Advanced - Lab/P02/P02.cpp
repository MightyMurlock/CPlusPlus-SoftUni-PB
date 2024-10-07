#include <iostream>
using namespace std;

int main() {
	string input;
	cin >> input;

	if (input == "Monday" || 
		input == "Tuesday" ||
		input == "Wednesday" ||
		input == "Thursday" ||
		input == "Friday") {
		
		cout << "Working day" << endl;
	}
	else if (input == "Saturday" || input == "Sunday") {
		
		cout << "Weekend" << endl;
	}
	else {
		cout << "Error" << endl;
	}
}