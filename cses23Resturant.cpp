#include <bits/stdc++.h>

using namespace std;
#define ll long long


ll solution() {

	// // ll n;
	// // cin >> n;
	// // vector<pair<ll, int>>ax;
	// // ll temp = 0, ans = 0;
	// // for (ll i = 0; i < n; ++i)
	// // {
	// // 	ll u, v;
	// // 	cin >> u;
	// // 	cin >> v;
	// // 	ax.push_back({u, 1});
	// // 	ax.push_back({v, -1});

	// // }

	// // sort(ax.begin(), ax.end());

	// // for (auto x : ax) {
	// // 	cout << x.first << " " << x.second << endl;
	// // 	temp += x.second;
	// // 	ans = max(temp, ans);
	// // }


	// return ans;


	//compression
	ll n;
	cin >> n;
	ll ind = 1;
	map<ll, ll>mp;

	for (int i = 0; i < n; ++i)
	{	ll u, v;
		cin >> u;
		cin >> v;
		mp[u] = 1;
		mp[v] = -1;
	}

	ll ans = 0, temp = 0;
	for (auto x : mp) {
		temp += x.second;
		ans = ans > temp ? ans : temp;
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
