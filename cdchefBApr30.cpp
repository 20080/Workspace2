#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define MOD 1000000007

void solution() {
	ll N;
	cin >> N;
	ll sum = 0;
	for (ll i = 0; i < N; ++i)
	{
		ll temp;
		cin >> temp;
		sum = (sum + temp + MOD) % MOD;
	}

	ll Q;
	cin >> Q;
	ll two = 2;
	while (Q--) {
		sum = (sum * two) % MOD;
		cout << sum << endl;
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
