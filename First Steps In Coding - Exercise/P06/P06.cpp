#include <iostream>
using namespace std;

int main() {

	const double nylonSqMeterPrice = 1.5;
	const double paintLiterPrice = 14.5;
	const double paintThinnerPrice = 5;

	int nylonSqMeter, paintLiter, paintThinner;
	cin >> nylonSqMeter >> paintLiter >> paintThinner;
	
	int hours;
	cin >> hours;

	double nylonSqMeterTotal = nylonSqMeterPrice * (nylonSqMeter + 2);
	double paintLiterTotal = paintLiterPrice * (paintLiter + (paintLiter * 0.1));
	double paintThinnerTotal = paintThinnerPrice * paintThinner;
	
	double bags = 0.4;

	double totalMaterials = nylonSqMeterTotal + paintLiterTotal + paintThinnerTotal + bags;

	double workerPayed = (totalMaterials * 0.3) * hours;

	double totalPrice = totalMaterials + workerPayed;

	cout << totalPrice << endl;

}