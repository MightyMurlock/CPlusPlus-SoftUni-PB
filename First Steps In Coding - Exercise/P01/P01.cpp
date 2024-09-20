#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double usd;
	cin >> usd;

	const double exchangeRate = 1.79549;
	double bgn = usd * exchangeRate;

	cout << fixed << setprecision(2) << bgn << endl;
}