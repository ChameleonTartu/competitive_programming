/*
#include <iostream>

using namespace std;

int main() {
	int N, M, Y; cin >> N >> M >> Y;
	int flag = 1;
	for (int i = 0; i < M; ++i) {
		int number = i;
		for (int j = 1; j < N; ++j) {
			number = (number * i) % M;
		}
		if (number == Y && flag) {
			cout << i;
			flag = 0;
		}
		else if (number == Y) {
			cout << " " << i;
		}
	}

	if (flag)
		cout << "-1";
	//while (1);
	return 0;
}
*/