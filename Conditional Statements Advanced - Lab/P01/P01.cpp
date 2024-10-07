#include <iostream>
using namespace std;

//Option 1
//int main() {
//	int input;
//	cin >> input;
//
//	switch (input) {
//	case 1:
//		cout << "Monday" << endl;
//		break;
//	case 2:
//		cout << "Tuesday" << endl;
//		break;
//	case 3:
//		cout << "Wednesday" << endl;
//		break;
//	case 4:
//		cout << "Thursday" << endl;
//		break;
//	case 5:
//		cout << "Friday" << endl;
//		break;
//	case 6:
//		cout << "Saturday" << endl;
//		break;
//	case 7:
//		cout << "Sunday" << endl;
//		break;
//	default:
//		cout << "Error" << endl;
//		break;
//	}
//}
//Option 2

int main() {

	int input;
	string output;
	cin >> input;

	switch (input) {
	case 1:
		output = "Monday";
		break;
	case 2:
		output = "Tuesday";
		break;
	case 3:
		output = "Wednesday";
		break;
	case 4:
		output = "Thursday";
		break;
	case 5:
		output = "Friday";
		break;
	case 6:
		output = "Saturday";
		break;
	case 7:
		output = "Sunday";
		break;
	default:
		output = "Error";
		break;
	}
	cout << output << endl;
}