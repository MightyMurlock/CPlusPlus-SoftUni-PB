#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double vegetablePriceKg, fruitPriceKg;
	cin >> vegetablePriceKg >> fruitPriceKg;

	int vegetableKg, fruitKg;
	cin >> vegetableKg >> fruitKg;

	const double exchangeRate = 1.94;

	double vegetablePrice = vegetablePriceKg * vegetableKg;
	double fruitPrice = fruitPriceKg * fruitKg;

	double price = (vegetablePrice + fruitPrice) / exchangeRate;

	cout << fixed << setprecision(2) << price << endl;
}