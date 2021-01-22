#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, m, a;
	cin >> n >> m >> a;


	ll ans = ceil((m / a)) * ceil(n / a);
	cout << ans;


	// ll sqn = a, ls = a;


	// if (n < a)
	// 	a = 0;
	// else
	// 	while (a < n)
	// 		a += ls;
	// if (m < sqn)
	// 	sqn = 0;
	// else
	// 	while (sqn < m)
	// 		sqn += ls;

	// // if (sqn == 1)
	// // 	sqn = 0;
	// // if (a == 1)
	// // 	a = 0;


	// if (ls >= m && ls >= n)
	// 	cout << 1;
	// else
	// 	cout << (a * sqn) / (ls * ls);

}
