#include <iostream>
using namespace std;

int main() {
	double age;
	string gender;
	string output;
	cin >> age >> gender;

	if (gender == "m") {
		if (age >= 16) {
			output = "Mr.";
		}
		else {
			output = "Master";
		}
	}
	else {
		if (age >= 16) {
			output = "Ms.";
		}
		else {
			output = "Miss";
		}
	}
	cout << output << endl;
}