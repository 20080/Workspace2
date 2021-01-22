#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T = 0;
	cin >> T;
	while (T-- > 0) {
		int cand = 0, c = 0;
		cin >> cand;
		map<int, int> m;

		int x = 0;
		for (int i = 0; i < cand; ++i)
		{	cin >> x;
			m[x]++;
			c += x;
		}
		x = x / 2;

		map<int , int  > :: iterator it;

		for ( it = m.begin(); it != m.end(); it++) {
			if (it->first * it->second >= x && x % it->first == 0)
				cout << "YES\n";
			else if (it->first * it->second >= x)
			{

			}
		}

	}
}