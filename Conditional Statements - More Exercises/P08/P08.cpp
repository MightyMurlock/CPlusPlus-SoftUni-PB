#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double GASOLINE_PRICE = 2.22;
	const double DIESEL_PRICE = 2.33;
	const double GAS_PRICE = 0.93;

	const double GASOLINE_DISCOUNT = 0.18;
	const double DIESEL_DISCOUNT = 0.12;
	const double GAS_DISCOUNT = 0.08;

	const double DISCOUNT1 = 0.08;
	const double DISCOUNT2 = 0.1;

	string type;
	double fuel;
	string card;
	cin >> type
		>> fuel
		>> card;

	cout << fixed << setprecision(2);
	if (type == "Gas") {
		double price = fuel * GAS_PRICE;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}

		if (card == "Yes") {
			price -= GAS_DISCOUNT;
		}

		cout << price << " lv.";
	}
	else if (type == "Gasoline") {
		double price = fuel * GASOLINE_PRICE;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}

		if (card == "Yes") {
			price -= GASOLINE_DISCOUNT;
		}

		cout << price << " lv.";
	}
	else if (type == "Diesel") {
		double price = fuel * DIESEL_PRICE;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}

		if (card == "Yes") {
			price -= DIESEL_DISCOUNT;
		}

		cout << price << " lv.";
	}


}