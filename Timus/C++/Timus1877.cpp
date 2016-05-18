/*
#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int lock_one, lock_two;
	cin >> lock_one >> lock_two;
	if (lock_one == 0) {
		cout << "yes" << endl;
	}
	else {
		for (int i = 1; i < 10000; ++i)
			if ( (i % 2 == 1 && lock_two == i) || (i % 2 == 0 && lock_one == i)) {
				cout << "yes" << endl;
				return 0;
			}
	}
	cout << "no" << endl;
	//while (1);
	return 0;
}
*/