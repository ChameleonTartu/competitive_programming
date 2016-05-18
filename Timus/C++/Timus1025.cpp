#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class MinVotePoint {
	int numberGroups;
	vector<int> groups;
public:
	void addGroup(int group) { groups.push_back(group / 2 + 1); };
	void sortGroups() { sort(groups.begin(), groups.end()); }
	int minVotesInGroups() {
		int sum = 0;
		for (int i = 0; i < numberGroups; ++i) {
			sum += groups[i];
		}
		return sum;
	}

	MinVotePoint(int numberGroups) {
		groups.reserve(numberGroups);
		this->numberGroups = numberGroups / 2 + 1;
	};
	
};

int main() {
	int n; cin >> n;
	MinVotePoint votePoint(n);
	int group;
	for (int i = 0; i < n; ++i) {
		cin >> group;
		votePoint.addGroup(group);
	}
	votePoint.sortGroups();
	cout << votePoint.minVotesInGroups() << endl;
	return 0;
}