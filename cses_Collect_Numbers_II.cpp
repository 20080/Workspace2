#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solution() {
	int n, q;
	cin >> n >> q;
	int ans = 1;
	int a[n] = {0}, b[n] = {0};
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i]--;
		b[a[i]] = i;
	}

	for (int i = 1; i < n; ++i) if (b[i - 1] > b[i]) ans++;

	while (q--) {

		int l, r;
		cin >> l >> r;
		l--;
		r--;
		set<pair<int, int>>st;

		if (a[l] + 1 < n)st.insert({a[l], a[l] + 1});
		if (a[l] - 1 >= 0)st.insert({a[l] - 1, a[l]});

		if (a[r] + 1 < n)st.insert({a[r], a[r] + 1});
		if (a[r] - 1 >= 0)st.insert({a[r] - 1, a[r]});

		for (auto m : st) {
			if (b[m.first] > b[m.second]) {
				ans--;
			}
		}

		swap(a[l], a[r]);
		b[a[l]] = l;
		b[a[r]] = r;

		for (auto m : st) {
			if (b[m.first] > b[m.second]) {
				ans++;
			}
		}

		cout << ans << endl;
	}

}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solution();
	return 0;
}