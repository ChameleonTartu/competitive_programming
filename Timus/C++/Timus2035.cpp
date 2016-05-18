/*
#include <iostream>

using namespace std;

int main() {
	long long X, Y, C; cin >> X >> Y >> C;
	if (C < 0 || C >(X + Y))
		cout << "Impossible" << endl;
	else {
		if (X <= C && Y <= C)
			cout << X << " " << (C - X) << endl;
		else if (C >= X)
			cout << X << " " << (C - X) << endl;
		else if (C >= Y)
			cout << (C - Y) << " " << Y << endl;
		else
			cout << C << " " << 0 << endl;
	}
	//while (1);
	return 0;
}
*/