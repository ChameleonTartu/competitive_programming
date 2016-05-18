/*
#include <iostream>

using namespace std;


int wheels[100];

int main() {
	int number_of_wheel_pairs, wheel_pair; cin >> number_of_wheel_pairs;
	for (int i = 0; i < number_of_wheel_pairs; ++i) {
		cin >> wheel_pair;
		wheel_pair -= 600;
		if (wheel_pair < 0 || wheel_pair > 100)
			continue;
		else
			++wheels[wheel_pair];
	}

	int served_trains = 0;
	for (int i = 0; i < 101; ++i) {
		served_trains += (wheels[i] / 4);
	}
	cout << served_trains << endl;
	return 0;
}
*/