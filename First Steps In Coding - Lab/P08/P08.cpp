#include <iostream>
using namespace std;
int main()
{
	int dogFood, catFood;
	cin >> dogFood >> catFood;

	double price = (dogFood * 2.5) + (catFood * 4);
	cout << price << " lv." << endl;
}
