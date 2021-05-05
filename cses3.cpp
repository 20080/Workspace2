#include <bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;

	ll ans = 0, mx = 0;

	for (int i = 0; i < n; ++i)
	{
		ll x = 0;
		cin >> x;
		mx = max(mx, x);
		ans += mx - x;
	}


	cout << ans << endl;
}