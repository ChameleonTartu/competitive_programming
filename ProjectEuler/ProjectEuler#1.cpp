/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 12:27:05 PM
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

int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	int tests; cin >> tests;
	for(int i = 0; i < tests; ++i) {
		unsigned long long n; cin >> n;
		--n;
		unsigned long long three = n/3,  
				   five = n/5,
				   fifteen = n/15, 
				   sum = 0;
		sum += 3 * three * (three + 1)/2;
		sum += 5 * five * (five + 1)/2;
		sum -= 15 * fifteen * (fifteen + 1)/2;
		cout <<  sum << endl;
	}

	return 0;
}
