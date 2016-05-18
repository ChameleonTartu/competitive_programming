#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
	string line; cin >> line;
	map<char, int> pairs;
	for (int i = 0; i < line.length(); ++i) {
		if (pairs.find(line[i]) != pairs.end())
			++pairs[line[i]];
		else
			pairs[line[i]] = 1;
	}
	pair<char, int> max_pair = make_pair('a', -1);
	for (auto &element : pairs) {
		if (element.second > max_pair.second) max_pair = element;
	}
	cout << max_pair.first << endl;
	return 0;
}