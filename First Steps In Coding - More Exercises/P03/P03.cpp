#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double celsius;
	cin >> celsius;

	double fahrenheit = (1.8 * celsius) + 32;
	cout << fixed << setprecision(2) << fahrenheit << endl;
}