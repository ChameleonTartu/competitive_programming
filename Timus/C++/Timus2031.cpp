#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	switch (n) {
		case 1: cout << "01" << endl; break;
		case 2: cout << "11 01" << endl; break;
		case 3: cout << "11 01 60" << endl; break;
		case 4:cout << "11 01 60 80" << endl; break;
		default: cout << "Glupenky Pierre" << endl; 
	}
	return 0;
}