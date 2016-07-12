/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 05:42:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  DMYTRO CHASOVSKYI (), dmitriy.chasovskoy@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <vector>

using namespace std;

#define endl '\n'

typedef unsigned long long ull;

const int SIZE = 10001;

vector<ull> findSumOfSquares() {
	vector<ull> sumOfSquares(SIZE + 1, 0);
	for(int i = 1; i < SIZE; ++i) {
		sumOfSquares[i] = sumOfSquares[i-1] + i * i;
	}
	return sumOfSquares;
}

vector<ull> findSquareOfSum() {
	vector<ull> squareOfSum(SIZE + 1, 0);
	ull sum = 0;
	for(int i = 1; i < SIZE; ++i) {
		sum += i;
		squareOfSum[i] = sum * sum;
	}
	return squareOfSum;
}

int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	int tests; cin >> tests;
	vector<ull> sumOfSquares = findSumOfSquares();
    vector<ull> squareOfSum = findSquareOfSum();	

	for(int i = 0; i < tests; ++i) {
		int n; cin >> n;
		cout << squareOfSum[n] - sumOfSquares[n] << endl;
	}

	return 0;
}
