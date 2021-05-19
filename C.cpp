#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll N, M, ans = 0;
	cin >> N >> M;

	vector<ll>m(N + 1, 1);

	for (int i = 2; i <= N; ++i)
	{
		ll a = M % i;
		ans += m[a];

		for (int j = a; j <= N; j += i)
		{
			m[j]++;
		}
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


