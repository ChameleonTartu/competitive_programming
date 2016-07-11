/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 03:51:49 PM
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

typedef unsigned long long ull;

#define endl '\n'

ull isPrime(ull number) {
	if( number < 2 || (number % 2 == 0 && number != 2) ) 
		return 0;
	
	ull divisor = 3;
	while(divisor * divisor <= number) {
		if(number % divisor == 0) return 0;
		divisor += 2;
	}
	return true;
}


#define max(a, b) b > a && isPrime(b) ? b : a

ull biggestPrimeFactor(ull number) {
	while(number % 2 == 0) number /= 2;
	if( number == 1) return 2;

	if(isPrime(number)) return number;
	
	ull divisor = 3, primeFactor = 1;
	while(divisor * divisor <= number) {
		if( number % divisor == 0) {
			primeFactor = max(primeFactor, divisor);
			primeFactor = max(primeFactor, number/divisor);
		}
		divisor += 2;
	}
	return primeFactor;
}

int main() {
	cout.sync_with_stdio(0);
	cin.tie(0);
	int tests; cin >> tests;
	for(int i = 0; i < tests; ++i) {
		ull n; cin >> n;
		cout << biggestPrimeFactor(n) << endl;
	}
	return 0;
}
