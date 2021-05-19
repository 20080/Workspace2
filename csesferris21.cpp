#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll solution() {

	ll n, x;
	cin >> n >> x;
	vector<ll>kids(n);
	for (int i = 0; i < n; ++i)
		cin >> kids[i];
	sort(kids.begin(), kids.end());

	ll ans = 0;

	ll i = 0;
	ll N = n;
	n--;

	while (kids[i] && kids[n] && i < N && n >= 0 && i != n) {
		if (kids[i] + kids[n] <= x) {
			ans++;
			kids[i] = kids[n] = 0;
			i++;
			n--;
		}
		else if (kids[i] + kids[n] > x) {
			kids[n] = 0;
			ans++;
			n--;
		}
	}

	for (int i = 0; i < N; ++i)
	{
		if (kids[i])
			ans++;
	}


	// while (kids[i] + kids[i + 1] <= x && i < n - 1) {
	// 	ans++;
	// 	i += 2;
	// }

	// if (i < n) {
	// 	ans += n - i;
	// }

	return ans;

}



int main() {
	// clock_t begin = clock();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	// printf("computed in = %.12fs\n", (double)(clock() - begin) / CLOCKS_PER_SEC);
	return 0;
}