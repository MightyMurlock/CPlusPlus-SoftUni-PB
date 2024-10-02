#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//CARD DISCOUNT
	const double GASOLINE_DISCOUNT = 0.18;
	const double DIESEL_DISCOUNT = 0.12;
	const double GAS_DISCOUNT = 0.08;

	//DISCOUNT1 = >= 20 && <= 25
	const double DISCOUNT1 = 0.08;
	//DISCOUNT2 = > 25
	const double DISCOUNT2 = 0.1;
	//DISCOUNT FOR THE FINAL PRICE

	double gasolinePrice = 2.22;
	double dieselPrice = 2.33;
	double gasPrice = 0.93;
	
	string type;
	double fuel;
	string card;
	cin >> type
		>> fuel
		>> card;

	double price = 0;
	if (type == "Gasoline") {
		
		price += gasolinePrice;
		
		if (card == "Yes") {
			price -= GASOLINE_DISCOUNT;
		}

		price *= fuel;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}
	}
	else if (type == "Diesel") {

		price += dieselPrice;

		if (card == "Yes") {
			price -= DIESEL_DISCOUNT;
		}

		price *= fuel;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}
	}
	else if (type == "Gas") {

		price += gasPrice;

		if (card == "Yes") {
			price -= GAS_DISCOUNT;
		}

		price *= fuel;

		if (fuel >= 20 && fuel <= 25) {
			price -= price * DISCOUNT1;
		}
		else if (fuel > 25) {
			price -= price * DISCOUNT2;
		}
	}

	cout << fixed << setprecision(2) << price << " lv." << endl;
}