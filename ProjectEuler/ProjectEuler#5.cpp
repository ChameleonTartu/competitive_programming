/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#5.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 05:21:55 PM
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


ull gcd(ull a, ull b){
	return b == 0 ?  a : gcd(b, a % b);
}



int main() {
	int tests; cin >> tests;
	for(int i = 0; i < tests; ++i) {
		ull n, number = 1; cin >> n;
		for(int j = 2; j < n + 1; ++j) {
			number = number * j / gcd(number, j); 
		}
		cout << number << endl;
	}	
	return 0;
}
