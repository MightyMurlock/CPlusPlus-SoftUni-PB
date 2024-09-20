#include <iostream>
using namespace std;

int main() {

	int annualFee;
	cin >> annualFee;

	double shoes = annualFee - (annualFee * 0.4);
	double clothes = shoes - (shoes * 0.2);
	double ball = clothes * 0.25;
	double accessories = ball * 0.2;

	double total = annualFee + shoes + clothes + ball + accessories;

	cout << total << endl;
}