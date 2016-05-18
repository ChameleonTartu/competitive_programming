#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n; cin >> n;
	string s;
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	char ch; cin >> ch;
	for (int i = 0; i < v.size(); ++i) {
		if (v[i][0] == ch)
			cout << v[i] << endl;
	}
	return 0;
}