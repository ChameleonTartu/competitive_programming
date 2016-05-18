#include <iostream>

using namespace std;
#define max(a, b) (a > b) ? ((a)) : ((b))

int main()
{
	int k, n; cin >> k >> n;
	int sum = 0, cars;
	for (int i = 0; i < n; ++i) {
		cin >> cars;
		sum = max( sum + cars - k, 0 );
	}
	cout << sum << endl;
	return 0;
}