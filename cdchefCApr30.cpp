#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	ll N;
	cin >> N;
	ll W, Wr;
	cin >> W >> Wr;
	vector<ll>arr(N, 0);
	map<ll, ll>m;
	for (ll i = 0; i < N; ++i)
	{
		cin >> arr[i];
		m[arr[i]]++;
	}
	if (W <= Wr)
		return "Yes";
	for (auto x : m) {
		if (x.second % 2 && x.second > 1) {
			m[x.first]--;
		}
	}
	ll ans = Wr;
	for (auto x : m) {
		if (x.second > 1)
			ans += x.second * x.first;
		if (ans >= W)
			return "Yes";
	}
	return "No";



}


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
