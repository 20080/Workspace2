#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define MOD 1000000007

ll solution() {
	ll x, y, n, z;
	cin >> x >> y >> n;
	//x == i-1 th term suppose 1st if i==2 and y == i+1 i.e 3rd
	// adding them up gives 2nd

	vector<ll>dp(7, 0);
	n = n % 6;
	z = y - x, dp[1] = x, dp[2] = y;
	for (int i = 3; i <= 6; i++) {
		x = y, y = z, z = y - x, dp[i % 6] = y;
	}
	return (dp[n % 6] >= 0) ? dp[n % 6] % MOD : (MOD + dp[n % 6] % MOD) % MOD;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}
