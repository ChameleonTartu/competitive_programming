/*
 * =====================================================================================
 *
 *       Filename:  Timus1902.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/09/2016 06:32:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  DMYTRO CHASOVSKYI (), dmitriy.chasovskoy@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
	int n, t, s, opposite_t; cin >> n >> t >> s;
	for(int i = 0; i < n; ++i) {
		cin >> opposite_t;
		cout << setprecision(6) << fixed << ( max(opposite_t, t) + (s - abs(opposite_t - t))/2.0 ) << endl;	
	}
	return 0;
}
