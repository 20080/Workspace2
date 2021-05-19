#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll n;
	cin >> n;
	set<ll>st;
	for (ll i = 0; i < n; i++) {
		ll x;
		cin >> x;
		st.insert(x);

	}
	return st.size();
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}