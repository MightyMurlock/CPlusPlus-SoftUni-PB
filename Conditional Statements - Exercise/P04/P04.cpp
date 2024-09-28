#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double PUZZLE_PRICE = 2.6;
	const double DOLL_PRICE = 3;
	const double TEDDY_BEAR_PRICE = 4.1;
	const double MINION_PRICE = 8.2;
	const double TRUCK_PRICE = 2;

	double excursionPrice;
	cin >> excursionPrice;

	int puzzleCount, dollCount, teddyBearCount, minionCount, truckCount;
	cin >> puzzleCount >> dollCount >> teddyBearCount >> minionCount >> truckCount;

	
	double totalPrice = 0;
	totalPrice = (
		(puzzleCount * PUZZLE_PRICE) +
		(dollCount * DOLL_PRICE) +
		(teddyBearCount * TEDDY_BEAR_PRICE) +
		(minionCount * MINION_PRICE) +
		(truckCount * TRUCK_PRICE)
	);
	int toyCount = (
		puzzleCount +
		dollCount + 
		teddyBearCount + 
		minionCount + 
		truckCount
	);

	if (toyCount >= 50) {
		/*totalPrice -= totalPrice * 0.25;*/
		totalPrice *= 0.75;
	}

	/*totalPrice -= totalPrice * 0.1;*/
	totalPrice *= 0.9;

	if (totalPrice >= excursionPrice) {
		cout << "Yes! " << fixed << setprecision(2) << totalPrice - excursionPrice << " lv left." << endl;
	}
	else {
		cout << "Not enough money! "<< fixed << setprecision(2) << excursionPrice - totalPrice << " lv needed." << endl;
	}
}