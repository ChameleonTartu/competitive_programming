#include <iostream>

using namespace std;

int main() {
	char ch;
	int n; cin >> n >> ch;
	if (n < 3) {
		if (ch == 'B' || ch == 'C')
			cout << "aisle" << endl;
		else
			cout << "window" << endl;
	}
	else if (n < 21) {
		if (ch == 'A' || ch == 'F')
			cout << "window" << endl;
		else
			cout << "aisle" << endl;
	}
	else {
		if (ch == 'A' || ch == 'K')
			cout << "window" << endl;
		else {
			if (ch == 'D' || ch == 'C' || ch == 'G' || ch == 'H')
				cout << "aisle" << endl;
			else
				cout << "neither" << endl;
		}
	}
	return 0;
}