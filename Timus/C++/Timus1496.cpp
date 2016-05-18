#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	int n; cin >> n;
	string s;
	map<string, int> m;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (m.find(s) != m.end())
			++m[s];
		else
			m[s] = 1;
	}
	for (auto &i : m) {
		if (i.second > 1)
			cout << i.first << endl;
	}
	return 0;
}