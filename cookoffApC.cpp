#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll N, Relax;
	cin >> N >> Relax;
	ll k = Relax;
	vector<ll>work(N, 0);
	vector<ll>tension(N, 0);
	vector<ll>prac(N, 0);



	for (ll i = 0; i < N; ++i)
	{
		cin >> work[i];
		if (i == 0) {
			prac[i] = 0;
			continue;
		}
		prac[i] = (work[i] - work[i - 1]) * Relax;
	}
	bool sw = true;
	for (ll i = 0; i < N; ++i)
	{
		cin >> tension[i];
	}

	ll ans = tension[0];
	ll total = tension[0];

	// for (int i = 0; i < N; ++i) {
	// 	total += tension[i];
	// 	total -= prac[i];
	// 	if (total < 0)
	// 		total = 0;
	// 	ans = max(total, ans);

	// }

	ll z = 0;
	for (int i = 1; i < N; i++) {
		ll x = work[i] - work[i - 1];
		total = max(z, total - Relax * x);
		total += tension[i];
		ans = max(ans, total);
	}





	return ans;



}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
