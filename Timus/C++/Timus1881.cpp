/*
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int h, w, n; cin >> h >> w >> n;
	string s;
	int line = 1, word = 0;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (word == 0)
			word = s.length();
		else if (word + 1 + s.length() > w) {
			++line;
			word = s.length();
		}
		else {
			word += (1 + s.length());
		}
	}
	cout << ceil(1. * line/h) << endl;
	//while (1);
	return 0;
}
*/