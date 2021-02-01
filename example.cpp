#include<iostream>
using namespace std;



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	uint32_t n = 4294967293;
	int ans = 0;
	while (n) {
		if ((n & 1)) {
			ans++;
		}

		n >>= 1;

	}
	cout << ans;

}