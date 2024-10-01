#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int V, P1, P2;
	double H;
	cin >> V
		>> P1
		>> P2
		>> H;

	double P1Total = P1 * H;
	double P2Total = P2 * H;

	double total = P1Total + P2Total;

	cout << fixed << setprecision(2);
	if (total <= V) {
		cout << "The pool is " << (total / V) * 100 << "% full. Pipe 1: "
			<< (P1Total / total) * 100 << "%. Pipe 2: " << (P2Total / total) * 100 << "%." << endl;
	}
	else {
		cout << "For " << H << " hours the pool overflows with " << total - V << " liters." << endl;
	}

}