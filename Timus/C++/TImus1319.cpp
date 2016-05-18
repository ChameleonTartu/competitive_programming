#include <iostream>

using namespace std;

int a[105][105];

int main() {
	int n; cin >> n;
	int i = n - 1, j = 0, counter = 1;
	while (i != 0 || j != n) {
		int index_i = i, index_j = j;
		while (index_i < n && index_j < n) {
			a[index_j][index_i] = counter++;
			++index_i;
			++index_j;
		}
		if( i > 0 ) --i;
		else ++j;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (j != 0) cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}