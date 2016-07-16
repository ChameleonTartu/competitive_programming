#include <vector>
#include <iostream>
using namespace std;

typedef vector<int> vint;
typedef vector<vint> vvint;

#define endl '\n'
#define max(a, b) a > b ? a : b

const int SIZE = 20, WINDOW = 3;

vvint matrix(SIZE, vint(SIZE));


int down(vvint &m) {
    int result = 0;
    for(int i = 0; i < (SIZE - WINDOW); ++i)
        for(int j = 0; j < SIZE; ++j) {
            int sum = 1;
            for(int k = 0; k <= WINDOW; ++k)
                sum *= m[i + k][j];
            result = max(result, sum);
    }
    return result;
}

int right(vvint &m) {
    int result = 0;
    for(int i = 0; i < SIZE; ++i)
        for(int j = 0; j < (SIZE - WINDOW); ++j) {
            int sum = 1;
            for(int k = 0; k <= WINDOW; ++k)
                sum *= m[i][j + k];
            result = max(result, sum);
    }
    return result;
}

int diag(vvint &m) {
    int result = 0;
    for(int i = 0; i < (SIZE - WINDOW); ++i)
        for(int j = 0; j < (SIZE - WINDOW); ++j) {
            int sum = 1;
            for(int k = 0; k <= WINDOW; ++k)
                sum *= m[i + k][j + k];
        result = max(result, sum);
    }
    return result;
}

int antidiag(vvint &m) {
    int result = 0;
    for(int i = 0; i < (SIZE - WINDOW); ++i) 
        for(int j = WINDOW; j < SIZE; ++j) {
            int sum = 1;
            for(int k = 0; k <= WINDOW; ++k)
                sum *= m[i + k][j - k];
            result = max(result, sum);
    }
    return result;
}


int calculate(vvint &m) {
    int result = 0;
    result = max(result, down(m));
    result = max(result, right(m));
    result = max(result, diag(m));
    result = max(result, antidiag(m));
    return result;
}

int main() {
    for(int i = 0; i < SIZE; ++i)
        for(int j = 0; j < SIZE; ++j)
            cin >> matrix[i][j];
    cout << calculate(matrix) << endl;
    return 0;
}