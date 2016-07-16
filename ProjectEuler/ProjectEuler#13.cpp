#include <iostream>
#include <vector>
#include <string>

using namespace std;
const int BLOCK_SIZE = 10000;
const int SIZE = 15;

vector<int> balance(vector<int> &a) {
	for(int i = a.size() - 1; i > 0; --i) {
		a[i-1] += a[i] / BLOCK_SIZE;
		a[i] %= BLOCK_SIZE;
    }
    return a;
}

vector<int> add(const vector<int> &a, const vector<int> &b) {
	vector <int> c = a;
	for(int i = 0; i < c.size(); ++i) {
		c[i] += b[i];
    }
    return balance(c);
}

vector<int> multiply(vector<int> &a, int t) {
    for(int i = 0; i < a.size(); ++i)
        a[i] *= t;
    return a;
}

vector<int> convertToLongNumber(string long_number) {
	vector<int> a(SIZE, 0);
	a[a.size() - 1] += (long_number[0] - '0');
    for(int i = 1; i < long_number.length(); ++i) {
        a = multiply(a, 10);
        a[a.size() - 1] = a[a.size() - 1] + (long_number[i] - '0');
        a = balance(a);
    }
    return a;
}

string make_string(int n) {
	int correct_size = to_string(BLOCK_SIZE).length() - 1;
	string s = to_string(n);
	while(s.size() < correct_size)
		s = "0" + s;
	return s;
}

string takeFirst(int n, const vector<int> number) {
	int index = 0; while(number[index] == 0) ++index;
	string numbers = to_string(number[index]);
    while(numbers.length() < n)
        numbers += make_string(number[++index]);
    return numbers.substr(0, n);
}

int main() {
	int tests; cin >> tests;
	vector<int> number(SIZE, 0);
	for(int i = 0; i < tests; ++i) {
		string long_number; cin >> long_number;
		number = add(number, convertToLongNumber(long_number));	
    }
    
    cout << takeFirst(10, number) << endl;
	return 0;
}