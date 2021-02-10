#include<iostream>
using namespace std;
#define ll long long

void solve() {
	ll x, y, p;
	cin >> x >> y >> p;

	if ((p % 2) == 0) {

		if (x * y >= p)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}

	else if (p <= x || p <= y)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

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