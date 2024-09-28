#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double DECOR_PRICE = 0.1;
	const int EXTRA_TRESHHOLD = 150;
	
	double budget;
	cin >> budget;

	int extras;
	cin >> extras;
	double clothesPriceExtra;
	cin >> clothesPriceExtra;

	double decor = budget * DECOR_PRICE;
	double extrasClothesPrice = extras * clothesPriceExtra;

	if (extras > EXTRA_TRESHHOLD) {
		extrasClothesPrice -= extrasClothesPrice * 0.1;
	}

	double total = decor + extrasClothesPrice;

	cout << fixed << setprecision(2);
	if (total <= budget) {
		cout << "Action!" << endl;
		cout << "Wingard starts filming with " << budget - total << " leva left." << endl;
	}
	else {
		cout << "Not enough money!" << endl;
		cout << "Wingard needs " << total - budget << " leva more." << endl;
	}
}