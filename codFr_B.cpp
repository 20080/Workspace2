#include <bits/stdc++.h>

using namespace std;
#define ll long long

void worthyBitch() {
	int side;
	cin >> side;
	vector < vector<char>> v(side, vector<char>(side));

	for (int i = 0; i < side; ++i)
	{
		for (int j = 0; j < side; ++j)
		{
			cin >> v[i][j];
		}
	}

	int x1, y1, x2, y2;
	bool x = false;


	for (int i = 0; i < side; ++i)
	{
		for (int j = 0; j < side; ++j)
		{
			if (v[i][j] == '*')
			{
				if (!x)
				{
					x1 = i;
					y1 = j;
					x = !x;
				}

				else {
					x2 = i;
					y2 = j;
				}

			}
		}

	}

	// cout << x1 << " " << y1 << " " << endl;
	// cout << x2 << " " << y2 << " " << endl;
	// cout << endl;
	int x3, y3, x4, y4;


	x = x1 == x2 || y1 == y2;

	if (x) {
		if (x1 == x2 && x1 != side - 1)
		{
			x3 = x1 + 1;
			x4 = x2 + 1;
			y3 = y1;
			y4 = y2;
		}

		else if ((x1 == x2 && x1 == side - 1)) {
			x3 = x1 - 1;
			x4 = x2 - 1;
			y3 = y1;
			y4 = y2;
		}

		else if (y1 == y2 && y1 != side - 1)
		{
			x3 = x1;
			x4 = x2;
			y3 = y1 + 1;
			y4 = y2 + 1;

		}

		else if (y1 == y2 && y1 == side - 1) {
			x3 = x1;
			x4 = x2;
			y3 = y1 - 1;
			y4 = y2 - 1;
		}
	}

	else {

		x3 = x2;
		y3 = y1;
		x4 = x1;
		y4 = y2;


	}

	// cout << x3 << " " << y3 << " " << endl;
	// cout << x4 << " " << y4 << " " << endl;
	// cout << endl;


	for (int i = 0; i < side; ++i)
	{
		for (int j = 0; j < side; ++j)

		{
			if ((i == x3 && j == y3) || (i == x4 && j == y4))
			{
				cout << "*";
				continue;
			}

			cout << v[i][j];
		}
		cout << endl;
	}

}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
		worthyBitch();
	return 0;
}
