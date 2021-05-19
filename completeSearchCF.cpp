#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	int n;
	cin >> n;
	ll x[n];
	ll y [n];
	for (ll &xz : x)
		cin >> xz;
	for (ll &xz : y)
		cin >> xz;
	ll ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; j < n; ++j)
		{
			ll tempx = x[i] - x[j], tempy = y[i] - y[j];
			ll temp = tempx * tempx + tempy * tempy;
			ans = max(temp, ans);

		}
	}
	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}