#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double rad;
	cin >> rad;

	double deg = round(rad * 180 / M_PI);

	cout << deg << endl;

}