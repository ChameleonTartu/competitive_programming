/*
#include <iostream>
#include <set>
#include <string>

using namespace std;

#define abs(a) (a > 0) ? (a) : (-a)

int main() {
	set<string> one{ "Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf", "Phoebus", "Ralph", "Robin" },
		        two{"Bambi", "Belle", "Bolt", "Mulan", "Mowgli", "Mickey", "Silver", "Simba", "Stitch"},
		        three{"Dumbo", "Genie", "Jiminy", "Kuzko", "Kida", "Kenai", "Tarzan", "Tiana", "Winnie"};
	int n, index = 1, sum = 0; cin >> n;
	string s;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (one.find(s) != one.end()) {
			sum += ( abs( (index - 1) ) );
			index = 1;
		}
		else if( two.find(s) != two.end() ){
			sum += ( abs( (index - 2) ) );
			index = 2;
		}
		else {
			sum += ( abs( (index - 3) ) );
			index = 3;
		}
	}

	cout << sum << endl;
	return 0;
}
*/