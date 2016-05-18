/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n; cin >> n;
	vector< vector<int> > v(n, vector<int>(n));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> v[i][j];
		}
	}
	int i = -1, j = 0;
	while (i < n && j < n) {
		if (i < n - 1)
			++i;
		else
			++j;
		int u = i, w = j;
		while (u > -1 && w < n) {
			if (u != 0 || w != 0)
				cout << " ";
			cout << v[u][w];
			--u, ++w;
		}
	}
	cout << endl;
	//while (1);
	return 0;
}
*/