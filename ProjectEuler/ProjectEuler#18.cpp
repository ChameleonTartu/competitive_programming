#include <cmath>
#include <cstdio>
#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>
using namespace std;

const int SIZE = 20;

int main() {
    vector<vector<int>> triangle(SIZE, vector<int>(SIZE));
    int tests; scanf("%d", &tests);
    for(int i = 0; i < tests; ++i) {
        int n; scanf("%d", &n);
        
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < j + 1; ++k)
                scanf("%d", &triangle[j][k]);
        
            
        for(int j = 1; j < n; ++j) {
            triangle[j][0] += triangle[j-1][0];
            triangle[j][j] += triangle[j-1][j-1];
        }
            
        for(int j = 1; j < n; ++j)
            for(int k = 1; k < j; ++k)
                triangle[j][k] += max(triangle[j-1][k-1], triangle[j-1][k]);
        
        int max_el = INT_MIN;
        for(int i = 0; i < n; ++i)
            max_el = max(max_el, triangle[n-1][i]);
        
        printf("%d\n", max_el);
    }
    return 0;
}