#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

const int MAX = 1001;

int numberOfDivisors(int number) {
	int divisors = 2;
    for(int i = 2; i*i <= number; ++i) {
        if(number % i == 0) divisors += 2;
        if(i*i == number) --divisors;
    }
    return divisors;
}

int calculateDivisors(int naturalNumber) {
	int divisors;
	if(naturalNumber % 2 == 0 ) {
        divisors = numberOfDivisors(naturalNumber/2);
        divisors *= numberOfDivisors(naturalNumber + 1);
    }
    else {
        divisors = numberOfDivisors((naturalNumber + 1)/2);
        divisors *= numberOfDivisors(naturalNumber);
    }
	return divisors;
}

vector<int> maxDivisors(const int MAX) {
	vector<int> max_divisors(MAX, 0);
	max_divisors[1] = 3;
    int naturalNumber = 3, divisors;
    for(int i = 2; i < MAX; ++i) {
        divisors = calculateDivisors(naturalNumber);

        while(i >= divisors)
            divisors = calculateDivisors(++naturalNumber);

        int sum = naturalNumber*(naturalNumber + 1)/2;
        while(i < divisors && i < MAX)
            max_divisors[i++] = sum;
        --i;
    }
    return max_divisors;
}

int main() {
	vector<int> divisors = maxDivisors(MAX);
    int tests; cin >> tests;
    for(int i = 0; i < tests; ++i) {
        int n; cin >> n;
        cout << divisors[n] << endl;
    }
	return 0;
}