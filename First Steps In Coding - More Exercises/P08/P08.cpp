#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	double r;
	cin >> r;

	double circleArea = M_PI * pow(r, 2);
	double circlePerimeter = 2 * M_PI * r;

	cout << fixed << setprecision(2) << circleArea << endl
		<< circlePerimeter << endl;
}