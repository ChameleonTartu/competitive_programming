#include <iostream>

using namespace std;

int main() {
	int client, plus, driver, minus; cin >> client >> plus >> driver >> minus;

	while (true) {
		if (driver <= client) {
			cout << client << endl;
			break;
		}

		if (client + plus > driver) {
			cout << driver << endl;
			break;
		}
		client += plus;
		if (driver <= client) {
			cout << client << endl;
			break;
		}
		driver -= minus;
	}
	return 0;
}