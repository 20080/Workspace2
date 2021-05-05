#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int a, b, n;
	cin >> a >> b >> n;
	int re = 10;
	a *= 10;
	for (int i = 0; i <= 9; ++i)
	{	re = (a + i);
		if (re % b == 0) {
			break;
		}
	}

	if (re % b == 0)
	{
		string ans = "";
		ans = to_string(re);
		for (int i = 0; i < n - 1; ++i)
		{
			ans += '0';
		}

		cout << ans << endl;
		return 0;

	}
	cout << -1 << endl;

	return 0;
}
