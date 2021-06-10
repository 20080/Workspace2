#include <bits/stdc++.h>

using namespace std;
#define ll long long


ll solution() {
	int n;
	cin >> n;
	ll arr[n];
	for (ll &i : arr)cin >> i;

	map<ll, ll>mp;
	ll ans = 0;
	ll start = 0;
	for (int end = 0; end < n; end++) {
		if (mp.find(arr[end]) != mp.end()) {
			start = max(start, mp[arr[end]] + 1);
		}

		mp[arr[end]] = end;
		ans = max(ans, end - start + 1);
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