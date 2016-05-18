#include <iostream>

using namespace std;

int main() {
	int n; cin >> n;
	unsigned long long previous = 2, next = 2;
	if (n == 1 || n == 2) {
		cout << 2 << endl;
		return 0;
	}
	else {
		int temp;
		while (n > 2) {
			temp = previous;
			previous = next;
			next = temp + next;
			--n;
		}
	}
	cout << next << endl;
	return 0;
}