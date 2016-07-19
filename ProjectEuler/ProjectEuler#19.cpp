#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long ull;


const int MAX = 1001;
const ull BLOCK_SIZE = 1000000000000;
const ull SIZE = 320;

int sumDigits(string number) {
    int sum = 0;
    for(const char& i: number){
        sum += (i - '0');
    }
    return sum;
}

string convertLongVectorToString(vector<ull> &long_vector) {
    string answer = "";
    for(int i = 0; i < long_vector.size(); ++i) {
        answer += to_string(long_vector[i]);
    }
    return answer;
}

void correct(vector<ull> &long_vector) {
    for(int i = long_vector.size(); i > 0; --i) {
        long_vector[i-1] += long_vector[i]/BLOCK_SIZE;
        long_vector[i] = long_vector[i] % BLOCK_SIZE;
    }
}

void mult(vector<ull> &long_vector, int number) {
    for(int i = 0; i < long_vector.size(); ++i) {
        long_vector[i] *= number;
    }
    correct(long_vector);
}

vector<int> factorialDigitSums(const int MAX){
    vector<ull> long_vector(SIZE, 0);
    vector<int> sum(MAX + 1, 1);
    long_vector[long_vector.size() - 1] = 1;
    for(int i = 2; i < MAX; ++i) {
        mult(long_vector, i);
        sum[i] = sumDigits(convertLongVectorToString(long_vector));
    }
    return sum;
}

int main() {
    vector<int> sum = factorialDigitSums(MAX);
    int tests; scanf("%d", &tests);
    for(int i = 0; i < tests; ++i) {
        int n; scanf("%d", &n);
        printf("%d\n", sum[n]);
    }
    return 0;
}