#include <iostream>
#include <string>

using namespace std;

struct Penguins{
	pair<string, int> emperor = make_pair("Emperor Penguin", 0),
		macaroni = make_pair("Macaroni Penguin", 0),
		little = make_pair("Little Penguin", 0);
};

int main() {
	int n; cin >> n;
	string s1, s2;
	Penguins penguins;
	for (int i = 0; i < n; ++i) {
		cin >> s1 >> s2;
		string s = s1 + " " + s2; 
		
		if (penguins.emperor.first == s)
			++penguins.emperor.second;
		else if (penguins.macaroni.first == s)
			++penguins.macaroni.second;
		else
			++penguins.little.second;
	}

	if (penguins.emperor.second > penguins.macaroni.second && penguins.emperor.second > penguins.little.second)
		cout << penguins.emperor.first << endl;
	else if (penguins.macaroni.second > penguins.emperor.second && penguins.macaroni.second > penguins.little.second)
		cout << penguins.macaroni.first << endl;
	else
		cout << penguins.little.first << endl;
	return 0;
}