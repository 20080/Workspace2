#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int H, W;
	cin >> H >> W;

	vector<vector<int>>v(H + 2, vector<int>(W + 2, 0));
	for (int i = 1; i < H + 1 ; ++i)
	{
		for (int j = 1; j < W + 1 ; ++j)
		{	char s = 'f';
			cin >> s;
			if (s == '#')
				v[i][j] = 1;
			else
				v[i][j] = 0;
		}
	}
	int ans = 0;
	for (int i = 0; i < H; ++i)
	{
		for (int j = 0; j < W; ++j)
		{	int cnt = 0;
			// cout << v[i][j];
			if (v[i][j])
				cnt++;
			if (v[i][j + 1])
				cnt++;
			if (v[i + 1][j])
				cnt++;
			if (v[i + 1][j + 1])
				cnt++;
			if (cnt % 2)
				ans++;
		}
		// cout << "\n";

	}
	cout << ans << endl;
}