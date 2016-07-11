/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 03:35:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  DMYTRO CHASOVSKYI (), dmitriy.chasovskoy@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>

using namespace std;


#define endl '\n'

typedef unsigned long long ull;

ull fibonacciNumber(ull left, ull right) {
	return left + right;
}

ull fibonacciEvenSum(ull MAX) {
	ull left = 1, right = 1, sum = 0;
	while(right < MAX) {
		sum += right % 2 == 0 ? right : 0;
		ull temp = right;
		right = fibonacciNumber(left, right);
		left = temp;
	}
	return sum;
}

int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	int tests; cin >> tests;
	for(int i = 0; i < tests; ++i) {
		ull n; cin >> n;
		cout << fibonacciEvenSum(n) << endl;
	}
	return 0;
}
