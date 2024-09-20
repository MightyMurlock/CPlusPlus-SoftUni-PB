#include <iostream>
using namespace std;

int main() {

	const double penPrice = 5.80;
	const double markerPrice = 7.20;
	const double detergentPrice = 1.20;

	int penNumber, markerNumber, detergentLiter;
	double discountPercent;

	cin >> penNumber >> markerNumber >> detergentLiter;
	cin >> discountPercent;

	double penTotal = penPrice * penNumber;
	double markerTotal = markerPrice * markerNumber;
	double detergentTotal = detergentPrice * detergentLiter;
	double total = penTotal + markerTotal + detergentTotal;

	double discount = discountPercent / 100;

	double totalPrice = total - (total * discount);

	cout << totalPrice << endl;
}