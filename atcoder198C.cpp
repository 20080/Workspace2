#include <bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	double R, X, Y;

	cin >> R >> X >> Y;

	double distance = 0;

	distance += sqrt(X * X + Y * Y);

	if (distance == R)
	{
		cout << 1 << endl;
	}

	else if (distance <= R + R)
	{
		cout << 2 << endl;
	}

	else
		cout << ceil(distance / R) << endl;

}
