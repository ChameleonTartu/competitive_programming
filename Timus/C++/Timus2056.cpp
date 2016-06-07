#include <iostream>
#include <cmath>

#define Eps 10E-5

using namespace std;

int main() {
	int exams; cin >> exams;
	int three = 0, mark, total = 0;
	for (int i = 0; i < exams; ++i) {
		cin >> mark;
		total += mark;
		if (mark == 3)
			three = 1;
	}
	if (three)
		cout << "None" << endl;
	else if (fabs(5.0 - (1. * total) / exams) <= Eps)
		cout << "Named" << endl;
	else if ( (1. * total) / exams - 4.5 >= -Eps)
		cout << "High" << endl;
	else
		cout << "Common" << endl;

	return 0;
}