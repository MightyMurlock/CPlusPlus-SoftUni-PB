#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	string city;
	double sales;
	double comission;
	cin >> city >> sales;

	if (city == "Sofia") {
		if (sales >= 0 && sales <= 500)
			comission = 0.05;
		else if (sales > 500 && sales <= 1000)
			comission = 0.07;
		else if (sales > 1000 && sales <= 10000)
			comission = 0.08;
		else if (sales > 10000)
			comission = 0.12;
		else
			comission = 0;
	}
	else if (city == "Varna") {
		if (sales >= 0 && sales <= 500)
			comission = 0.045;
		else if (sales > 500 && sales <= 1000)
			comission = 0.075;
		else if (sales > 1000 && sales <= 10000)
			comission = 0.1;
		else if (sales > 10000)
			comission = 0.13;
		else
			comission = 0;
	}
	else if (city == "Plovdiv") {
		if (sales >= 0 && sales <= 500)
			comission = 0.055;
		else if (sales > 500 && sales <= 1000)
			comission = 0.08;
		else if (sales > 1000 && sales <= 10000)
			comission = 0.12;
		else if (sales > 10000)
			comission = 0.145;
		else
			comission = 0;
	}
	else
		comission = 0;

	if (comission != 0)
		cout << fixed << setprecision(2) << comission * sales << endl;
	else
		cout << "error" << endl;
}