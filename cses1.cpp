#include <bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;
	ll ar[n] = {0};
	for (ll i = 0; i < n ; ++i)
	{	int x;
		cin >> x;
		ar[x - 1] = 1;
	}

	for (ll i = 0; i < n; ++i)
	{

		if (ar[i] == 0)
		{
			cout << i + 1 << endl;
			break;
		}
	}
	return 0;
}