/*
 * =====================================================================================
 *
 *       Filename:  ProjectEuler#4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/11/2016 04:11:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  DMYTRO CHASOVSKYI (), dmitriy.chasovskoy@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

#define sup(a, b, limit) b > a && limit > b ? b : a 
#define endl '\n'

int isPalindrom(int number, int length) {
	string palindrom = to_string(number);
	
	if(palindrom.length() < length) return 0;

	for(int i = 0; i < palindrom.length()/2; ++i) {
		if(palindrom[i] != palindrom[palindrom.length() - 1 - i]) return 0;
	}
	return 1;
}

set<int> findAllPalindroms(int length = 6) {
	set<int> palindroms;
	const int START = 100, END = 1000;
	
	for(int i = START; i < END; ++i) {
		for(int j = START; j < END; ++j) {
			int multiplication = i*j;
			if(isPalindrom(multiplication, length))
				palindroms.insert(multiplication);		
		}
	}
	return palindroms;
}

int supremumPalindrom(const set<int> &palindroms, int n) {
	int max = 0;
	for(const int &i: palindroms)
		max = sup(max, i, n);

	return max;
}


int main() {
	cin.tie(0);
	cout.sync_with_stdio(0);

	set<int> palindroms = findAllPalindroms();	
	int tests; cin >> tests;
	for(int i = 0; i < tests; ++i) {
		int n; cin >> n;
		cout << supremumPalindrom(palindroms, n) << endl;		
	}
	return 0;
}
