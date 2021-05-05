#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll x, y;
	string s;
	cin >> x >> y >> s;

	vector<ll> arr(26, 0);

	for (char x : s)
		arr[x - 'A']++;
	sort(arr.begin(), arr.end(), greater<>());

	ll ans = 0;
	ll i = 0;
	// cout << arr[0] << endl;
	while (y && i < x) {
		if (y >= arr[i]) {
			ans += arr[i] * arr[i];
			y -= arr[i];
			arr[i] = 0;
		}

		else {

			ans += y * y;
			y = 0;
		}

		i++;
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
