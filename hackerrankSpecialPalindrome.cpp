#include <bits/stdc++.h>

using namespace std;
#define ll long

string solution() {

	ll n;
	string s;
	cin >> n >> s;

	ll ans = 0;
	ll scc[n] = {0};

	// string k = "";
	// ll counter = 1;
	// for (ll i = 1; i <= n; i++) {
	// 	if (s[i - 1] == s[i])
	// 		counter++;
	// 	else {
	// 		k += s[i - 1] + to_string(counter);
	// 		counter = 1;
	// 	}
	// }
	// ll j = 0;
	// for (ll i = 1; i < k.size() && j < k.size(); i += 2, j += 2) {

	// 	ll counts = k[i] - '0';
	// 	if (counts > 1) {
	// 		ans += (counts * (counts + 1)) >> 1;
	// 		// cout << ans << " ";
	// 	}
	// 	else {
	// 		ans++;
	// 		if (i == 1 || i == k.size() - 1) {
	// 			continue;
	// 		}

	// 		else {
	// 			if (k[j - 2] == k[j + 2]) {
	// 				ll temp = min((k[i - 2] - '0'), k[i + 2] - '0');
	// 				ans += temp;
	// 			}
	// 		}

	// 	}
	// }


	ll i = 0, j, c;
	while (i < n) {
		j = i + 1;
		c = 1;

		while (s[i] == s[j] && j < n) {
			j++, c++;
		}

		ans += (c * (c + 1)) >> 1;
		scc[i] = c;
		i = j;
	}

	for (int i = 1; i < n - 1; i++) {
		if (s[i] == s[i - 1])
			scc[i] = scc[i - 1];
		else if (s[i - 1] == s[i + 1])
			ans += min(scc[i - 1], scc[i + 1]);
	}

	return to_string(ans);
	// return k;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}