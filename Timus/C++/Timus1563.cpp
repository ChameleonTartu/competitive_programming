#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int number_of_malls; cin >> number_of_malls;
	set<string> stores;
	string store;
	getline(cin, store);
	for (int i = 0; i < number_of_malls; ++i) {
		getline(cin, store);
		stores.insert(store);
	}
	cout << (number_of_malls - stores.size()) << endl;
	return 0;
}