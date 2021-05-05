#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {
	ll x;
	cin >> x;
	ll sol = 4;
	ll i = 3;
	if (x == 2)
		return "yes";
	while (sol != x) {
		sol = i * i * 2;
		i++;
		if (sol > x)
			break;
	}
	return x == sol ? "yes" : "no";
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