#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	//workstation == w/h = 70/120 cm = 0.7/1.2 m
	//path way == 100cm = 1m
	//door == 160cm
	//teach chair == 160/120 cm = 1.6/1.2 m

	//door == -1 workstation
	//teach chair == -2 workstation
	
	double hM, wM;
	cin >> hM >> wM;

	//double areaRoom = h * w;
	
	double hCm = hM * 100;
	double wCm = wM * 100;

	const double workstationW = 70;
	const double workstationH = 120;
	const double pathway = 100;

	wCm -= pathway;

	int desksRow = wCm / 70;
	int rows = hCm / 120;

	int desksNumber = rows * desksRow - 3;

	cout << desksNumber << endl;
}