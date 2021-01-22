#include <bits/stdc++.h>
using namespace std;

#define ll long long


vector<int> print(vector<vector<int>> v, int m, int n) {
	int dir = 0;
	vector<int> ans;
	int top = 0, left = 0, bottom = m - 1, right = n - 1;

	while (top <= bottom && left <= right)
	{
		if (dir == 0) {
			for (int i = 0; i <= right; ++i)
			{
				ans.push_back(v[top][i]);

			}
			top++;
			dir = 1;
		}

		else if (dir == 1) {
			for (int i = top; i <= bottom; ++i)
			{
				ans.push_back(v[i][right]);

			}
			right--;
			dir = 2;
		}

		else if (dir == 2) {
			for (int i = right; i >= left; i--)
			{
				ans.push_back(v[bottom][i]);

			}
			bottom--;
			dir = 3;
		}

		else if (dir == 3) {
			for (int i = bottom; i >= top; i--)
			{
				ans.push_back(v[i][left]);

			}
			left++;
			dir = 0;
		}





	}

	return ans;

}



int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int m, n;
	cin >> m >> n;
	vector<vector<int>>v(m, vector<int>(n, 0));
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> v[i][j];
		}
	}

	vector<int>s = print(v, m, n);


	for (int it : s) {
		cout << it << " ";
	}

}
