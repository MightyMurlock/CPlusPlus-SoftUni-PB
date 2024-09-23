#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double mackerelPriceKg, spratPriceKg;
	cin >> mackerelPriceKg >> spratPriceKg;
	
	double bonitoKg, trachurusKg;
	int musselsKg;
	cin >> bonitoKg >> trachurusKg >> musselsKg;

	double bonitoPriceKg = mackerelPriceKg + (mackerelPriceKg * 0.6);
	double trachurusPriceKg = spratPriceKg + (spratPriceKg * 0.8);
	double musselsPrice = 7.5 * musselsKg;

	double bonitoPrice = bonitoPriceKg * bonitoKg;
	double trachurusPrice = trachurusKg * trachurusKg;
	
	double price = bonitoPrice + trachurusPrice + musselsPrice;
	cout << fixed << setprecision(2) << price << endl;
}