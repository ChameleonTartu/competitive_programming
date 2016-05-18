#include <iostream>

using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int sum_one = k, sum_two = 0, one, two;
	for (int i = 0; i < n; ++i) {
		cin >> one >> two;
		sum_one += one, sum_two += two;
	}

	if (sum_one - 2 * (n + 1) - sum_two < 0) cout << "Big Bang!" << endl;
	else cout << (sum_one - 2 * (n + 1) - sum_two) << endl;
	return 0;
}