#include <iostream>
using namespace std;

int main() {
	string input, output;
	cin >> input;

	if (input == "banana" || input == "apple" || input == "kiwi" || input == "cherry" || input == "lemon" || input == "grapes") {
		output = "fruit";
	}
	else if (input == "tomato" || input == "cucumber" || input == "pepper" || input == "carrot") {
		output = "vegetable";
	}
	else {
		output = "unknown";
	}
	
	cout << output << endl;
}