#include<iostream>
using namespace std;
int n = 8;
char arr[8][8];
int ans = 0;
int col[1000];
int diag1[1000];
int diag2[1000];

int solution(int y) {

	if (y == n) {
		ans++;
		return 0;
	}
	else {

		for (int i = 0; i < n; ++i)
		{
			if (col[i] || diag1[i + y] || diag2[i - y + n - 1]
			        || arr[y][i] == '*')
				continue;
			col[i] = diag1[i + y] = diag2[i - y + n - 1] = 1;
			solution(y + 1);
			col[i] = diag1[i + y] = diag2[i - y + n - 1] = 0;

		}


	}
	return 0;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin >> arr[i][j];
		}
	}

	solution(0);
	cout << ans;
}