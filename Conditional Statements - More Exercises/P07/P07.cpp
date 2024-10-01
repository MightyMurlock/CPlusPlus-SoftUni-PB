#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	string type;
	int fuel;
	cin >> type >> fuel;

	if (type == "Diesel") {
		if (fuel >= 25) {
			cout << "You have enough diesel." << endl;
		}
		else {
			cout << "Fill your tank with diesel!" << endl;
		}
	}
	else if (type == "Gasoline") {
		if (fuel >= 25) {
			cout << "You have enough gasoline." << endl;
		}
		else {
			cout << "Fill your tank with gasoline!" << endl;
		}
	}
	else if (type == "Gas") {
		if (fuel >= 25) {
			cout << "You have enough gas." << endl;
		}
		else {
			cout << "Fill your tank with gas!" << endl;
		}
	}
	else {
		cout << "Invalid fuel!" << endl;
	}
}