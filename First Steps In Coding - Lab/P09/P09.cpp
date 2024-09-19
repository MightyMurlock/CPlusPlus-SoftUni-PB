#include <iostream>
using namespace std;

int main()
{
	double area;
	cin >> area;

	double wholePrice = area * 7.61;
	double discount = wholePrice * 0.18;
	double finalPrice = wholePrice - discount; 

	cout << "The final price is: " << finalPrice << " lv." << endl << "The discount is: " << discount << " lv." << endl;
}
