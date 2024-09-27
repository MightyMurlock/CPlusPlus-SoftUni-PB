#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	string input;
	cin >> input;

	if (input == "s3cr3t!P@ssw0rd") {
		cout << "Welcome" << endl;
	}
	else {
		cout << "Wrong password!" << endl;
	}
}