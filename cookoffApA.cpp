#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {
	int a, b, c, T, A, B, C;
	cin >> a >> b >> c >> T >> A >> B >> C;

	if ((A < a || B < b || C < c) || (A + B + C) < T)
		return "No";
	return "Yes";
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
