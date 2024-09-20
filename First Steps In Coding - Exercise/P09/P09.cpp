#include <iostream>
using namespace std;

int main() {

	double lenghtCm, widthCm, heightCm;
	cin >> lenghtCm >> widthCm >> heightCm;
	
	double percentOccupied;
	cin >> percentOccupied;

	double lenghtDm = lenghtCm / 10;
	double widthDm = widthCm / 10;
	double heightDm = heightCm / 10;

	double aquariumVolume = lenghtDm * widthDm * heightDm;

	double waterNeeded = /*aquariumVolume * (1 - (percentOccupied / 100));*/	aquariumVolume - aquariumVolume * (percentOccupied / 100);

	cout << waterNeeded << endl;
}