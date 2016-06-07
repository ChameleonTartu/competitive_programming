#include <iostream>
#include <string>

#define max(a, b) (a > b) ? (a) : (b)

using namespace std;

int main() {
	string left_line, right_line; cin >> left_line >> right_line;
	int time = 0;
	int index_left_line = 0, index_right_line = 0;
	while (index_left_line < left_line.length() && index_right_line < right_line.length()) {
		if (
			((left_line[index_left_line] == 'R' || left_line[index_left_line] == 'F') &&
			 (right_line[index_right_line] == 'R' || right_line[index_right_line] == 'F')) ||
			 (left_line[index_left_line] == 'L' && right_line[index_right_line] == 'L')
		   ) {
			++time,	++index_left_line, ++index_right_line;
		}
		else if (left_line[index_left_line] == 'R' || left_line[index_left_line] == 'F') {
			++time, ++index_left_line;
		}
		else if (right_line[index_right_line] == 'R' || right_line[index_right_line] == 'F') {
			++time, ++index_right_line;
		}
	}
	if (index_left_line >= left_line.length())
		time += max(right_line.length() - (index_right_line), 0);
	else
		time += max(left_line.length() - (index_left_line), 0);
	
	cout << time << endl;
	return 0;
}