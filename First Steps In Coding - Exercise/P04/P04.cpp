#include <iostream>
using namespace std;

int main() {

	int pages, pagesAnHour, days;

	cin >> pages >>  pagesAnHour >> days;

	int hours = (pages / pagesAnHour) / days;

	cout << hours << endl;
}