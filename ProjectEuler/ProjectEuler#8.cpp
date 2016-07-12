#include <iostream>
#include <string>

using namespace std;

#define endl '\n'
#define max(a, b) a > b ? a : b 

int maxSequence(const string& number, int K) {
	int max_sequence = 0;
	for(int i = 0; i < number.length() - K; ++i) {
		int mult = 1;
        for(int j = i; j < i + K; ++j) {
                    mult *= (number[j] - '0');
        }
        max_sequence = max(max_sequence, mult); 
    }
    return max_sequence;
}

int main() { 
    int tests; cin >> tests;	
    int N, K;
    string number;
    for(int i = 0; i < tests; ++i) {
        cin >> N >> K >> number;
        cout << maxSequence(number, K) << endl;
    }
    return 0;
}
