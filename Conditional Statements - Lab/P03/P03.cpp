#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	int input;
	cin >> input;

	if (input % 2 == 0) {
		cout << "even" << endl;
	}
	else {
		cout << "odd" << endl;
	}
}