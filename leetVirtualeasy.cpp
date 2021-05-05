#include <bits/stdc++.h>

using namespace std;
#define ll long long


string getSmallestString(int n, int k) {
	string ans = "";
	for (int i = 0; i < n; i++)
		ans += "a";
	k -= n;
	int p = n - 1;
	while (k) {
		if (k >= 26) {
			ans[p] = 'z';
			k -= 25;
			cout << ans[p];
		}
		else {
			ans[p] = 'a' + k;
			k = 0;
		}
		p--;
	}
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << getSmallestString(5, 31) << endl;
	return 0;
}