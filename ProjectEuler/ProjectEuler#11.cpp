#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long ull;

const int MAX = 1000001;

#define endl '\n'

int isPrime(int number, vector<ull>&prime) {
    if(number == 2) return 1;
    if(number % 2 == 0) return 0;
    for(const int &i: prime) {
        if(i*i > number) return 1;
        if(number % i == 0) return 0;
    }
    return 1;
}

vector<ull> findPrimeSums(const int MAX) {
    vector<ull> primes(MAX + 1, 0);
    vector<ull> values;
    for(int i = 2; i < MAX; ++i) {
        primes[i] = primes[i - 1];
        if(isPrime(i, values)) {
            primes[i] += i;
            values.push_back(i);
        }
    }
    return primes;
}

int main() {
    vector<ull> primes = findPrimeSums(MAX);
    int tests; cin >> tests;
    for(int i = 0; i < tests; ++i) {
        int N; cin >> N;
        cout << primes[N] << endl;
    }
    return 0;
}