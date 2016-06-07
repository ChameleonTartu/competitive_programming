#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	map<string, pair<int, int>> m;
	string name, device;
	int price;
	for (int i = 0; i < 6; ++i) {
		cin >> name >> device >> price;
		if (m.find(device) == m.end())
			m[device] = make_pair(price, 1);
		else
			m[device] = make_pair(min(m[device].first, price), m[device].second + 1);
	}
	pair<int, int> answer = make_pair(0, 0);
	device = "";
	for (auto &p : m) {
		if (answer.second < p.second.second) {
			answer = p.second;
			device = p.first;
		}
		else if (answer.second == p.second.second && p.second.first < answer.first) {
			answer = p.second;
			device = p.first;
		}
	}
	cout << device << endl;
	return 0;
}