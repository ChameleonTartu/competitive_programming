#include <iostream>
#include <string>

using namespace std;

string create_result_string(int size) {
	string result_body = "";
	string main_sinus = "", right_parenthesis = "";
	for (int i = 0; i < size; ++i) {
		if (i > 0 && i % 2 == 0)
			main_sinus += "+sin(" + to_string(i + 1);
		else if (i > 0 && i % 2 == 1)
			main_sinus += "-sin(" + to_string(i + 1);
		else
			main_sinus = "sin(" + to_string(i + 1);
		right_parenthesis += ")";

		if (i > 0)
			result_body = "(" + result_body + ")" + main_sinus + right_parenthesis + "+" + to_string(size - i);
		else
			result_body = main_sinus + right_parenthesis + "+" + to_string(size - i);
	}
	return result_body;
}

int main() {
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int N; cin >> N;
	cout << create_result_string(N) << endl;
	return 0;
}