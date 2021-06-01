#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solution() {
	int n, q;
	cin >> n >> q;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		a[i]--;
	};

	int b[n] = {0};
	int ans = 1;

	for (int i = 0; i < n; ++i)
	{
		b[a[i]] = i;
	}

	for (int i = 1; i < n; ++i)
	{
		if (b[i - 1] > b[i])
			ans++;
	}




	while (q--) {

		int aa, bb;
		cin >> aa >> bb;
		aa--;
		bb--;
		if (a[aa] > a[bb])ans--;
		else
			ans++;
		swap(a[aa], a[bb]);
		cout << ans << endl;

		// for (int x : a) {
		// 	cout << x << " ";
		// }
		// cout << endl;

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