#include <iostream>

using namespace std;

#define max(a, b) (a > b) ? (a) : (b)

int main()
{
	int n, k; cin >> n >> k;
	int add = (2 * n % k == 0) ? (0) : (1);
	cout << (max(((2 * n / k) + add), 2)) << endl;
	return 0;
}