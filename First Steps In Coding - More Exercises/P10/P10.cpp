#include <iostream>
using namespace std;

int main() {

	double temp;
	cin >> temp;

	if (temp >= 26 && temp <= 35)
	{
		cout << "Hot" << endl;
	}
	else if (temp >= 20.1 && temp <= 25.9)
	{
		cout << "Warm" << endl;
	}
	else if (temp >= 15 && temp <= 20)
	{
		cout << "Mild" << endl;
	}
	else if (temp >= 12 && temp <= 14.9)
	{
		cout << "Cool" << endl;
	}
	else if (temp >= 5 && temp <= 11.9)
	{
		cout << "Cold" << endl;
	}
	else
	{
		cout << "unknown" << endl;
	}
}