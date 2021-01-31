#include <bits/stdc++.h>


using namespace std;

#define ll long long

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n, minA, minB;
	cin >> n >> minA >> minB;
	ll a, b;
	while (cin) {
		cin >> a >> b;
		if (a < minA && b > minB) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
}






