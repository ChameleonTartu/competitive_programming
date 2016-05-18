/*
#include <iostream>
#include <string>

using namespace std;


int main() {
	string s; cin >> s;
	int n = 0;
	for (int i = 0; i < s.length(); ++i) {
		n = n * 10 + s[i] - '0';
	}
	int left = n - 1, right = n + 1;
	s = to_string(left);
	int len = s.length();
	for (int i = 0; i < 6 - len; ++i) {
		s = "0" + s;
	}
	if ( ((s[0] - '0') + (s[1] - '0') + (s[2] - '0')) == ((s[3] - '0') + (s[4] - '0') + (s[5] - '0')) ) {
		cout << "Yes" << endl;
		return 0;
	}
	
	s = to_string(right);
	len = s.length();
	for (int i = 0; i < 6 - len; ++i) {
		s = "0" + s;
	}

	if ( ((s[0] - '0') + (s[1] - '0') + (s[2] - '0')) == ((s[3] - '0') + (s[4] - '0') + (s[5] - '0')) ) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	//while (1);
	return 0;
}
*/