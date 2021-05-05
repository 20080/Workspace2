#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n = 18780;
	ll x, ans = 0;

	while (n--) {
		cin >> x;
		ans += x;
	}

	cout << ans;
}