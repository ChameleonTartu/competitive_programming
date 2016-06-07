#include <iostream>
#include <cmath>

using namespace std;

int max(int a, int b, int c) {
	int temp = (a > b) ? (a) : (b);
	return (temp > c) ? (temp) : (c);
}

int main() {
	int n, a[3], letter;  cin >> n;
	a[0] = a[1] = a[2] = 0;
	for (int i = 0; i < n; ++i) {
		cin >> letter;
		++a[letter - 1];
	}
	if ( (a[0] > 0 && a[1] > 0 && a[2] > 0) || 
		 (n == 4 && max(a[0], a[1], a[2]) <= 2 ) ||
		 (n == 5 && max(a[0], a[1], a[2]) <= 3 ) ||
		 (n > 5 && ((a[0] > 0 && a[1] > 0) || (a[1] > 0 && a[2] > 0) || (a[0] > 0 && a[2] > 0)))
		)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}