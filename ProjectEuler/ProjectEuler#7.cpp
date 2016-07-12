/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/12/2016 01:09:51 AM
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

const int NUMBER = 10000;

#define endl '\n'

int isPrime(int number, const vector<int>&primeNumbers) {
	for(const int &i: primeNumbers) {
		if(i * i > number) return 1;
		if(number % i == 0) return 0;
	}
}	

vector<int> findAllPrimeNumbers(const int NUMBER) {
	vector<int> primeNumbers{2, 3};
	for(int i = 5; primeNumbers.size() < NUMBER; i += 2 ) {
		if(isPrime(i, primeNumbers))
			primeNumbers.push_back(i);
	}
	return primeNumbers;
}

int main() {
	int tests; cin >> tests;
	vector<int> primeNumbers = findAllPrimeNumbers(NUMBER);
	for(int i = 0; i < tests; ++i) {
		int n; cin >> n;
		cout << primeNumbers[n -1] << endl;	
	}
	return 0;
}
