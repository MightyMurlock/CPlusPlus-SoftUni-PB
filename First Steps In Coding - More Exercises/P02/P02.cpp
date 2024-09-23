#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a, height;
	cin >> a >> height;

	double area = (a * height) / 2;
	cout << fixed << setprecision(2) << area << endl;
}