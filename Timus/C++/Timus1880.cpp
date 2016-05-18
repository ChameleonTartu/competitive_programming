/*
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define A(ff) ff.begin(), ff.end()

int main() {
	vector<int> v(3);
	vector<int> eigen_value;
	eigen_value.reserve(20000);
	for (int i = 0; i < v.size(); ++i) {
		cin >> v[i];
		int value;
		for (int j = 0; j < v[i]; ++j) {
			cin >> value;
			eigen_value.push_back(value);
		}
	}
	sort(A(eigen_value));
	int count = 0;
	for (int i = 0; i < eigen_value.size() - 2; ++i)
		if (eigen_value[i] == eigen_value[i + 1] && eigen_value[i + 1] == eigen_value[i + 2]) {
			++count;
		}
	cout << count << endl;
	return 0;
}
*/