#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int time1, time2, time3;
	cin >> time1 >> time2 >> time3;

	int totalTime = time1 + time2 + time3;

	int minutes = totalTime / 60;
	int seconds = totalTime % 60;

	cout << minutes << ':' << setw(2) << setfill('0') << seconds << endl;
}