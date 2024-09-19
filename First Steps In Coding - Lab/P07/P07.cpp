#include <iostream>
using namespace std;

int main()
{
	string name;
	cin >> name;

	int projects;
	cin >> projects;

	int hours = projects * 3;

	cout << "The architect " << name << " will need " << hours << " hours to complete " << projects << " project/s." << endl;
}
