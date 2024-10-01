#define _USE_MATH_DEFINE
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

	const double DELAY_DISTANCE = 15;
	const double DELAY_TIME = 12.5;
	
	double recordTime;
	cin >> recordTime;
	double distance;
	cin >> distance;
	double timeOneMeter;
	cin >> timeOneMeter;

	double swimTime = timeOneMeter * distance;
	double delay = floor((distance / DELAY_DISTANCE)) * DELAY_TIME;

	double time = swimTime + delay;

	cout << fixed << setprecision(2);
	if (recordTime > time) {
		cout << "Yes, he succeeded! The new world record is " << time <<
			" seconds." << endl;
	}
	else {
		cout << "No, he failed! He was " << time - recordTime <<
			" seconds slower." << endl;
	}
}