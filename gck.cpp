#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {
	ll N;
	cin >> N;
	string s;
	cin >> s;
	vector<int>a(N, 1);
	string ans = "";
	ans += "1 ";
	for (ll i = 1; i < N; ++i)
	{
		if (s[i] > s[i - 1])
			a[i] += a[i - 1];
		ans += to_string(a[i]) + " ";

	}


	return ans;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		cout << "Case #" << i << ": " << solution() << endl;
	}

	return 0;
}
