#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	ll ans = 1;

	while (n--) {
		ans <<= 1;
		ans %= 1000000007;
	}

	cout << ans;

	// ll ans = 1;
	// cout << (ans << 3);
	return 0;
}