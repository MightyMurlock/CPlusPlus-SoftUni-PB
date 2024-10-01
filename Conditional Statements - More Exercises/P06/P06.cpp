#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	const double MAGNOLI_PRICE = 3.25;
	const double ZUMBULI_PRICE = 4;
	const double ROSE_PRICE = 3.5;
	const double CACTI_PRICE = 8;

	const double FEE = 0.05;

	int magnoliCount, zumbuliCount, roseCount, cactiCount;
	double presentPrice;
	cin >> magnoliCount
		>> zumbuliCount
		>> roseCount
		>> cactiCount
		>> presentPrice;

	double money =
		(magnoliCount * MAGNOLI_PRICE) +
		(zumbuliCount * ZUMBULI_PRICE) +
		(roseCount * ROSE_PRICE) +
		(cactiCount * CACTI_PRICE);

	money -= money * FEE;

	if (money >= presentPrice) {
		cout << "She is left with " << floor(money - presentPrice) << " leva." << endl;
	}
	else {
		cout << "She will have to borrow " << ceil(presentPrice - money) << " leva." << endl;
	}
}