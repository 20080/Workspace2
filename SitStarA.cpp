#include<iostream>
using namespace std;


void solve() {
	int x, y;
	cin >> x >> y;

	//stair calc

	int st = 0;
	st = (x - 1) * 20;

	//elev

	int elev = 0;

	elev = (y - 1) * 5 + (x - 1) * 5;

	if (elev > st)
		cout << st << endl;
	else
		cout << elev << endl;

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