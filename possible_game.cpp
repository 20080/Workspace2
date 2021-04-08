#include <bits/stdc++.h>
using namespace std;

void solve() {
	int s, U, D, L, R;

	cin >> s >> U >> D >> L >> R;

	for (int i = 0 ; i < 16; i++) {
		int rU = U, rD = D, rL = L, rR = R;
		if (i & 1) {
			rU = -1;
			rL = -1;
		}
		if (i & 2) {
			rL = -1;
			rD = -1;
		}

		if (i & 4) {
			rD = -1;
			rR = -1;
		}

		if (i & 8) {
			rR = -1;
			rU = -1;
		}

		if (min(rU, min(rL, min(rD, rR))) >= 0 && max(rU, min(rL, min(rD, rR))) <= s - 2)
		{	cout << "Yes\n";
			return;
		}
	}
	cout << "No\n";
	return;

}


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		solve();

}