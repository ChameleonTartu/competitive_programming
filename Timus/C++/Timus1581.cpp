#include <iostream> 

using namespace std;

int main() {
	int next, previous = -1, amount = 0, n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> next;
		if (previous != next && previous != -1) {
			cout << amount << " " << previous << " ";
			amount = 0;
		}
		previous = next;
		amount += 1;
	}
	cout << amount << " " << previous << endl;
	return 0;
}