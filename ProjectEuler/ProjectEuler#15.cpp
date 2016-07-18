#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 505;
const int PRIME = 1000000000 + 7;

vector<vector<long long>> fulfill_matrix(const int MAX) {
    vector<vector<long long>> matrix(MAX, vector<long long>(MAX));
    for(int i = 0; i < MAX; ++i)
        matrix[0][i] = matrix[i][0] = 1;
    for(int i = 1; i < MAX; ++i) {
        for(int j = 1; j < MAX; ++j) {
            matrix[i][j] += matrix[i-1][j] + matrix[i][j-1];
            matrix[i][j] %= PRIME;
        }
    }
    return matrix;
}

int main() {
    vector<vector<long long>> matrix = fulfill_matrix(MAX);
    int tests; scanf("%d", &tests);
    for(int i = 0; i < tests; ++i) {
        int n, m; scanf("%d%d", &n, &m);
            cout << (matrix[n][m] % PRIME) << endl;
    }   
    return 0;
}