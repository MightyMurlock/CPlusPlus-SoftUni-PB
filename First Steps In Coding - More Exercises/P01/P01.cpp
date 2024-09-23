#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	double b1, b2, h;
	cin >> b1 >> b2 >> h;

	double area = (b1 + b2) * h / 2;
	cout << fixed << setprecision(2) << area << endl;
}