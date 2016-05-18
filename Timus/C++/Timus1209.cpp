#include <iostream>
#include <set>
#include <vector>

using namespace std;

int pow(int n) {
	if (n == 0) return 1;
	return 2 * pow(n - 1);
}

int main() {
	vector<int> v{1, 2, 4, 7, 11, 16};
	unsigned long long k = pow(31);
	//cout << k << endl;
	int index = 6;
	v.reserve(1000);
	while ((index + v[v.size() - 1]) < k) {
		v.push_back( (index + v[v.size() - 1]) );
		++index;
	}
	set<int> s;
	for (auto &i : v) {
		s.insert(i);
	}
	int n, value; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> value;
		if (i != 0) cout << " ";
		if (s.find(value) != s.end()) cout << 1;
		else cout << 0;
	}
	cout << endl;
	return 0;
}