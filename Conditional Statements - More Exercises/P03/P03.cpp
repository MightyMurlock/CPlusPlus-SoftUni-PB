#define _USE_MATH_DIFENES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	const double GRAPES_FOR_WINE = 0.4;

	int areaX;
	double kgGrapesY;
	int wineLiters;
	int workersCount;
	cin >> areaX
		>> kgGrapesY
		>> wineLiters
		>> workersCount;

	double grapes = areaX * kgGrapesY;
	double wine = GRAPES_FOR_WINE * grapes / 2.5;

	if (wine >= wineLiters) {
		cout << "Good harvest this year! Total wine: " << floor(wine) << " liters." << endl;
		cout << ceil(wine - wineLiters) << " liters left -> " << ceil((wine - wineLiters) / workersCount)
			<< " liters per person." << endl;
	}
	else {
		cout << "It will be a tough winter! More " << floor(wineLiters - wine) << " liters wine needed." << endl;
	}
}