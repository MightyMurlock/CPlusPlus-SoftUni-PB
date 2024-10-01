#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	const double GRAPHICS_CARD_PRICE = 250;
	const double PROCESSOR_PRICE = 0.35;
	const double RAM_MEMORY_PRICE = 0.1;
	const double DISCOUNT = 0.15;
	
	double budget;
	cin >> budget;
	int graphicsCardCount, 
		processorCount, 
		ramMemoryCount;
	cin >> graphicsCardCount 
		>> processorCount
		>> ramMemoryCount;

	double graphicsCardTotal = graphicsCardCount * GRAPHICS_CARD_PRICE;
	double processorTotal = processorCount * (PROCESSOR_PRICE * graphicsCardTotal);
	double ramMemoryTotal = ramMemoryCount * (RAM_MEMORY_PRICE * graphicsCardTotal);

	double total = graphicsCardTotal + processorTotal + ramMemoryTotal;
	if (graphicsCardCount > processorCount) {
		total -= total * DISCOUNT;
	}

	cout << fixed << setprecision(2);
	if (total <= budget) {
		cout << "You have " << budget - total << " leva left!" << endl;
	}
	else {
		cout << "Not enough money! You need " << total - budget << " leva more!" << endl;
	}

}