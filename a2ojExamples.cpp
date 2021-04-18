#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int x, y;
	int m;
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5; ++j)
		{
			cin >> m;
			if (m == 1) {
				x = i;
				y = j;
			}
		}
	}

	int ans = 0;

	ans += abs(x - 2);
	ans += abs(y - 2);
	cout << ans << endl;

	return 0;
}
