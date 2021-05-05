#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	int x, y, xr, yr, D;
	cin >> x >> y >> xr >> yr >> D;
	int ans = 0;

	int f = x / xr;
	int w = y / yr;

	ans = min(f, w);

	// cout << ans << endl;

	return ans >= D ? "Yes" : "No";
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

