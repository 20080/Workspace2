#include<bits/stdc++.h>
using namespace std;

#define ll long long

string find() {
	double k1, k2, k3, v;

	cin >> k1 >> k2 >> k3 >> v;
	double ans = k1 * k2 * k3 * v;

	ans = 100 / ans;


	ans = round( ans * 100.0 ) / 100.0;

	return ans < 9.58 ? "Yes" : "No";
}


int main() {

// # ifndef	ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;
	while (t--)
		cout << find() << endl;
}