#define _USE_MATH_DEFINE
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main() {

	string seriesName;
	int episode, afternoonBreak;
	getline(cin, seriesName);
	cin >> episode
		>> afternoonBreak;

	double lunchTime = 0.125 * afternoonBreak;
	double restTime = 0.25 * afternoonBreak;

	double freeTime = /*ceil(afternoonBreak - lunchTime - restTime)*/ afternoonBreak - lunchTime - restTime;
	
	if (freeTime >= episode) {
		cout << "You have enough time to watch " << seriesName << " and left with "
			<< ceil(freeTime - episode) << " minutes free time." << endl;
	}
	else {
		cout << "You don't have enough time to watch " << seriesName << ", you need " << ceil(episode - freeTime)
			<< " more minutes." << endl;
	}
}