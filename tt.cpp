#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int e;
	cin >> e;
	int a[e] = {0};
	for (int i = 0; i < e; ++i)
	{
		cin >> a[i];
	}
	int dp[e] = {0};
	int omax = 0;

	for (int i = 0; i < e; ++i)
	{
		int max = 0;
		for (int j = 0; j < i; ++j)
		{
			if (a[i] > a[j]) {
				if (dp[j] > max)
					max = dp[j];
			}
		}

		dp[i] = max + 1;
		if (dp[i] > omax)
			omax = dp[i];
	}

	cout << omax;
}