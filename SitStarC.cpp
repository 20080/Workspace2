#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool checkprime(ll n) {

	if (n == 1)
		return 0;
	if (n == 2 || n == 3)
		return 1;

	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return 0;
	}

	return 1;
}

void solve() {
	ll x, y, p;
	cin >> x >> y >> p;


	for (int i = 1; i * i <= p; ++i)
	{
		if (p % i)
			continue;

		if (x >= i && y >= p / i)
		{
			cout << "Yes\n";
			return;
		}

		if (y >= i && x >= p / i)
		{
			cout << "Yes\n";
			return;
		}
	}

	cout << "No\n";



	// if (checkprime(p) && (p <= x || p <= y)) {
	// 	cout << "Yes\n";
	// }
	// else if (!checkprime(p) && (p <= x * y))
	// 	cout << "Yes\n";
	// else cout << "No\n";


}

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		solve();
}