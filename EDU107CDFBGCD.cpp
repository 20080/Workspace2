#include <bits/stdc++.h>

using namespace std;
#define ll long long


void GCDB() {

	int a, b, c;

	cin >> a >> b >> c;



	int x = 1;

	while (to_string(x).length() != c) x *= 2;

	int ax = x, bx = x;

	while (to_string(ax).length() != a) ax *= 3;

	while (to_string(bx).length() != b) bx *= 5;

	cout << ax << " " << bx << endl;

}


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
		GCDB();
	return 0;
}