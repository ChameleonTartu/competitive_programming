#include <iostream>

using namespace std;

int findTuple(int N) {
    int a = -1, b = -1, c = -1;
    for(int i = 1; i <= N/3; ++i) {
        int t = N - i;
        int b_prec = N*(t - i), c_prec = t*t + i*i;
        t *= 2;
        if(b_prec % t != 0 || c_prec % t != 0) continue;
        b_prec /= t, c_prec /= t;
        
        if(i < b_prec && b_prec < c_prec && a*b*c < i*b_prec*c_prec) {
            a = i, b = b_prec, c = c_prec;
        }
    }
    return a*b*c;
}

int main() {
    int tests; cin >> tests;
    for(int i = 0; i < tests; ++i) {
        int N; cin >> N;
        cout << findTuple(N) << endl;
    }
    return 0;
}