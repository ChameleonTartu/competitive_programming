#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	int sum = 0, banch;
	for (int i = 0; i < n; ++i) {
		cin >> banch;
		sum += (banch > 1) ? (((banch - 1) / 2) % 2) : (0);
	}
	if (sum % 2 == 1)
		cout << "Daenerys" << endl;
	else
		cout << "Stannis" << endl;
	return 0;
}