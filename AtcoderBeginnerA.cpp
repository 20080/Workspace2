#include <bits/stdc++.h>


using namespace std;

#define ll long long

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string A = "Aoki", T = "Takahashi";

	int candyT = 0, candyA = 0, turn = 0;
	cin >> candyT >> candyA >> turn;

	if (candyA == candyT && turn == 0)
		cout << A << endl;
	else if (candyA == candyT && turn == 1)
		cout << T << endl;

	if (candyT > candyA)
		cout << T << endl;
	else if (candyA > candyT)
		cout << A << endl;

}






