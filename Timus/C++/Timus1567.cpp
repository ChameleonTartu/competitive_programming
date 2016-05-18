#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
	string s;
	set<char> one{ 'a', 'd', 'g', 'j', 'm', 'p', 's', 'v', 'y', '.', ' '},
		two{'b', 'e', 'h', 'k', 'n', 'q', 't', 'w', 'z', ','}, 
		three{ 'c', 'f', 'i', 'l', 'o', 'r', 'u', 'x', '!'};
	int sum = 0;
	getline(cin, s);
	for (int i = 0; i < s.length(); ++i) {
		if (one.find(s[i]) != one.end()) {
			sum += 1;
		}
		else if (two.find(s[i]) != two.end()) {
			sum += 2;
		}
		else {
			sum += 3;
		}
	}
	cout << sum << endl;
	return 0;
}