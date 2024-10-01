#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	const double TAXI_STARTING_FEE = 0.7;
	const double TAXI_DAY_FEE = 0.79;
	const double TAXI_NIGHT_FEE = 0.9;

	const double BUS_FEE = 0.09;

	const double TRAIN_FEE = 0.06;

	int km;
	string time;
	cin >> km
		>> time;

	cout << fixed << setprecision(2);
	//train
	if (km >= 100) {
		double price = km * TRAIN_FEE;
		cout << price << endl;
	}
	//bus
	else if (km >= 20 && km < 100) {
		double price = km * BUS_FEE;
		cout << price << endl;
	}
	//taxi
	else {
		if (time == "day") {
			double price = TAXI_STARTING_FEE + (TAXI_DAY_FEE * km);
			cout << price << endl;
		}
		else {
			double price = TAXI_STARTING_FEE + (TAXI_NIGHT_FEE * km);
			cout << price << endl;
		}
	}
}