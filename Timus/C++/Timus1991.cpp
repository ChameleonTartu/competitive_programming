#include <iostream>

using namespace std;

int main() {
	int unused = 0, survived = 0;
	int n, k, value; cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> value;
		if (value - k >= 0) {
			unused += (value - k);
		}
		else {
			survived += (k - value);
		}
	}
	
	cout << unused << " " << survived << endl;
	return 0;
}