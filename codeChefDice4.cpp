#include <iostream>
using namespace std;

#define ll long long

int re(int n) {
	if (n == 1)
	{
		return 32;
	}
	else if (n == 2) {
		return 44;
	}

	else if (n == 3)
	{
		return 55;
	}

	return 0;
}

int main() {
// # ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t;
	cin >> t;

	while (t--) {
		ll xxx;
		cin >> xxx;
		if (xxx == 1)
		{
			cout << 20 << endl;
		}
		else if (xxx == 2) {
			cout << 36 << endl;
		}

		else if (xxx == 3)
		{
			cout << 51 << endl;
		}
		else if (xxx == 4) {
			cout << 60 << endl;
		}

		else {
			int x = xxx % 4;
			xxx = xxx - x;
			xxx *= 11;
			if (x != 0)
				xxx += re(x);
			else
				xxx += 16;
			cout << xxx << endl;
		}

	}
	return 0;
}
