/*
#include <iostream> 
#include <vector>

using namespace std;


int main() {
	int n, m;  cin >> n >> m;
	vector<int> v(n, 0);
	int candidate;
	for (int i = 0; i < m; ++i) {
		cin >> candidate;
		++v[candidate - 1];
	}
	for (int i = 0; i < n; ++i) {
		cout.precision(2);
		cout << fixed << 100. * v[i] / m << "%" << endl;
	}
	//while (1);
	return 0;
}
*/