#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {
	ll A, B, P;
	cin >> A >> B >> P;

	return A * B == P ? "POSSIBLE DOUBLE SIGMA" : "16 BIT S/W ONLY";
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
