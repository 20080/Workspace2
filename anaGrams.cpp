#include <bits/stdc++.h>

using namespace std;
#define ll long long


int solution() {
	string s;
	map<string, int>m;
	cin >> s;
	int l = s.length();
	for (int i = 0; i < l; ++i)
	{
		string ss = "";

		for (int j = 0; j < l - i; ++j)
		{
			int k = i + j;
			ss += s[k];
			string n = ss;
			sort(n.begin(), n.end());
			cout << n << " ";
			m[n]++;
		}
	}
	ll ans = 0;
	ll two = 2;
	for (auto x : m) {
		ll y = x.second;
		ans += (y * (y - 1)) / two;
	}
	return ans;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
