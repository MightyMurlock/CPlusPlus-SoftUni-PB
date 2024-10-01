#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	int daysCount;
	cin >> daysCount;

	int foodLeft;
	cin >> foodLeft;

	double dogFood, catFood, tortoisFood;
	cin >> dogFood
		>> catFood
		>> tortoisFood;

	//Food needed:
	double dogFoodNeeded = daysCount * dogFood;
	double catFoodNeeded = daysCount * catFood;
	double tortoisFoodNeeded = (daysCount * tortoisFood) / 1000;

	double totalFood = dogFoodNeeded + catFoodNeeded + tortoisFoodNeeded;

	if (totalFood <= foodLeft) {
		cout << floor(foodLeft - totalFood) << " kilos of food left." << endl;
	}
	else {
		cout << ceil(totalFood - foodLeft) << " more kilos of food are needed." << endl;
	}
}