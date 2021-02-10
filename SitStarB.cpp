#include<iostream>
using namespace std;


void solve() {
	int sp, l, s;
	string z = " ";
	int a[sp] = {0};

	cin >> sp >> l >> s >> z;

	int cnt = 0;
	int p = 0, q = 0, r = 0;

	for (int i = 0; i < sp; ++i) {
		a[i] = (int)(z[i] - 48);
	}

	bool re = false, re2 = false;

	for (int i = 0; i < sp - 1; ++i)
	{

		if (a[i] == 0 && a[i + 1] == 0 && !re2) {
			p = i;
			q = i + 1;
			re2 = true;

		}
		if (a[i] == 0 && i != p && i != q) {
			re = true;
			r = i;
			// cout << i << " " << q << endl;
		}


	}

	if (re && re2)
	{	cout << "Yes" << endl;
		cout << p + 1 << " " << q + 1 << " " << endl;
		cout << r + 1 << endl;
	}
	else
		cout << "No";

}

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	// int t;
	// cin >> t;
	// while (t--)
	solve();
}