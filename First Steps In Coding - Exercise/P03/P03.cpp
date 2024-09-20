#include <iostream>
using namespace std;

int main() {

	double deposit;
	cin >> deposit;

	int depositTermMonths;
	cin >> depositTermMonths;

	double annualInterestRatePercent;
	cin >> annualInterestRatePercent;

	double interestRate = deposit * (annualInterestRatePercent / 100);
	double interestRateMonthly = interestRate / 12;
	double totalMoney = deposit + depositTermMonths * interestRateMonthly;

	cout << totalMoney << endl;
}