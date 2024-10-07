#include <iostream>
using namespace std;

int main() {
	string product, city;
	double quantity, price;
	cin >> product >> city >> quantity;

	if (city == "Sofia") {
		if (product == "coffee") { price = 0.50; }
		else if (product == "water") { price = 0.8; }
		else if (product == "beer") { price = 1.2; }
		else if (product == "sweets") { price = 1.45; }
		else if (product == "peanuts") { price = 1.60; }
	}
	else if (city == "Plovdiv") {
		if (product == "coffee") { price = 0.40; }
		else if (product == "water") { price = 0.7; }
		else if (product == "beer") { price = 1.15; }
		else if (product == "sweets") { price = 1.30; }
		else if (product == "peanuts") { price = 1.50; }
	}
	else if (city == "Varna") {
		if (product == "coffee") { price = 0.45; }
		else if (product == "water") { price = 0.7; }
		else if (product == "beer") { price = 1.10; }
		else if (product == "sweets") { price = 1.35; }
		else if (product == "peanuts") { price = 1.55; }
	}
	cout << price * quantity << endl;
}