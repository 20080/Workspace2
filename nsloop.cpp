
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {

	int s;
	cin >> s;
	int cars[s];
	for (int i = 0; i < s; i++) {
		cin >> cars[i];
	}
	if (s == 1)
		cout << "1" << endl;
	else {
		int ans = 0;
		int max = -1;
		int ind = 0;
		for (int i = 0; i < s; i++)
		{
			if (max < cars[i]) {
				ind = i;
				max = cars[i];
			}
		}
		for (int i = ind; i < s; i++) {
			if (cars[ind] > cars[i]) {
				ans++;
			}
		}
		cout << ans << endl;
	}

}



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int test;
	cin >> test;
	while (test--)
		solve();

}
