#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	int a, b;
	cin >> a >> b;

	return (((a + b) % 3 == 0) && (min(a, b) * 2 >= max(a, b))) ? "YES" : "NO";

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
}

