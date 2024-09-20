#include <iostream>
using namespace std;

int main() {

	const double chickenMenu = 10.35;
	const double fishMenu = 12.40;
	const double vegeMenu = 8.15;
	const double desertPercent = 20;
	const double delivery = 2.5;

	int chickenMenuOrder, fishMenuOrder, vegeMenuOrder;
	cin >> chickenMenuOrder >> fishMenuOrder >> vegeMenuOrder;

	double chickenMenuTotal = chickenMenuOrder * chickenMenu;
	double fishMenuTotal = fishMenuOrder * fishMenu;
	double vegeMenuTotal = vegeMenuOrder * vegeMenu;

	double menuTotal = chickenMenuTotal + fishMenuTotal + vegeMenuTotal;

	double desert = menuTotal * (desertPercent / 100);

	double total = menuTotal + desert + delivery;

	cout << total << endl;
}