#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll ans = 0;
	ll n, m, k;
	cin >> n >> m >> k;
	ll apart[m];
	ll cand[n];

	for (ll i = 0; i < n; i++) {
		cin >> cand[i];
	}

	for (ll i = 0; i < m; i++) {
		cin >> apart[i];
	}

	sort(apart, apart + m);
	sort(cand, cand + n);

	int i = 0, j = 0;

	while (i < n && j < m) {

		if (abs(apart[j] - cand[i]) <= k) {
			ans++;
			i++;
			j++;
		}
		else {

			if (apart[j] - cand[i] > k)
				i++;
			else
				j++;
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