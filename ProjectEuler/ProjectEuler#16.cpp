#include <cstdio>
#include <vector>
#include <string>

using namespace std;

typedef unsigned long long ull;

const int SIZE = 250;
const ull BLOCK_SIZE = 1000000000000000;
const int MAX_POWER = 10001;


void correct(vector<ull> &long_vector) {
    for(int i = long_vector.size() - 1; i  > 0; --i) {
        long_vector[i - 1] += long_vector[i]/BLOCK_SIZE;
        long_vector[i] %= BLOCK_SIZE;
    }
}

void multiplication(vector<ull> &long_vector, ull number) {
    for(int i = 0; i < long_vector.size(); ++i)
        long_vector[i] *= number;
    correct(long_vector);
}

int calculateDigits(string number){
    int sum = 0;
    for(int i = 0; i < number.length(); ++i) {
        sum += (number[i] - '0');
    }
    return sum;
}

string longVectorToString(vector<ull> long_vector) {
    string s = "";
    for(int i = 0; i < long_vector.size(); ++i) {
        s += to_string(long_vector[i]);
    }
    return s;
}

vector<int> sum_digits(const int MAX_POWER) {
    vector<int> sum(MAX_POWER, 0);
    vector<ull> long_vector(SIZE, 0);
    long_vector[long_vector.size() - 1] = 1;
    sum[0] = 1;
    for(int i = 1; i < MAX_POWER; ++i) {
        multiplication(long_vector, 2);
        sum[i] = calculateDigits(longVectorToString(long_vector));
    }
    return sum;
}

int main() {
    vector<int> numbers = sum_digits(MAX_POWER);
    
    int tests; scanf("%d", &tests);
    for(int i = 0; i < tests; ++i) {
        int n; scanf("%d", &n);
        printf("%d\n", numbers[n]);
    }
    return 0;
}