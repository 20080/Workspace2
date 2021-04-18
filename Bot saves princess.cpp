#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solution() {

	int N;
	cin >> N;
	int x, y;
	int x1, y1;
	cin >> x1, y1;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			char z;
			cin >> z;
			if (z == 'p')
				x = i, y = j;
		}
	}

	vector<string> v;
	while (true) {
		if (x1 < x) {
			x1 += 1;
			v.push_back("DOWN");
		}
		else if (x1 > x) {
			x1--;
			v.push_back("UP");
		}

		if (y1 < y)
		{
			y1++;
			v.push_back("RIGHT");
		}

		else if (y1 > y)
		{
			y1--;
			v.push_back("LEFT");
		}
		if (x1 == x && y == y1)
		{
			break;
		}

	}

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << endl;
	}


}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solution();
}
