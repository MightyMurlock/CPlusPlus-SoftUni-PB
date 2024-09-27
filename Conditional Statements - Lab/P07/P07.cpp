#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	string figure;
	cin >> figure;

	if (figure == "square") {
		double side;
		cin >> side;

		double area = pow(side, 2);
		cout << fixed << setprecision(3) << area << endl;
	}
	else if (figure == "rectangle") {
		double sideA, sideB;
		cin >> sideA >> sideB;

		double area = sideA * sideB;
		cout << fixed << setprecision(3) << area << endl;
	}
	else if (figure == "circle") {
		double radius;
		cin >> radius;

		double area = M_PI * pow(radius, 2);
		cout << fixed << setprecision(3) << area << endl;
	}
	else if (figure == "triangle") {
		double side, height;
		cin >> side >> height;

		double area = (side * height) / 2;
		cout << fixed << setprecision(3) << area << endl;
	}
}