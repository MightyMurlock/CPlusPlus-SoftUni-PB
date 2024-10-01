#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	
	const int DAYS_IN_YEAR = 365;
	const int PLAY_TIME_WORKDAY = 63;
	const int PLAY_TIME_REST_DAYS = 127;
	const int PLAY_TIME_NORM = 30000;

	int restDays;
	cin >> restDays;

	int wordays = DAYS_IN_YEAR - restDays;
	int playTime =
		(wordays * PLAY_TIME_WORKDAY) +
		(restDays * PLAY_TIME_REST_DAYS);

	if (playTime > PLAY_TIME_NORM) {
		
		int difference = playTime - PLAY_TIME_NORM;
		int H = difference / 60;
		int M = difference % 60;
		cout << "Tom will run away" << endl;
		cout << H << " hours and " << M << " minutes more for play" << endl;
	}
	else {
		int difference = PLAY_TIME_NORM - playTime;
		int H = difference / 60;
		int M = difference % 60;
		cout << "Tom sleeps well" << endl;
		cout << H << " hours and " << M << " minutes less for play" << endl;
	}
}