#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solution() {
	int M, N;
	cin >> N >> M;
	char z;

	int x1, x2, x3, x4, y1, y2, y3, y4;
	int k  =  1;
	vector < vector<char>> v(N, vector<char>(M));

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < M; ++j)
		{
			cin >> z;
			if (z == '*' && k == 1) {
				x1 = i;
				y1 = j;
				k++;
			}
			else if (z == '*' && k == 2) {
				x2 = i;
				y2 = j;
				k++;
			}
			else if (z == '*' && k == 3) {
				x3 = i;
				y3 = j;
				k++;
			}
		}
	}

	x4 = x1 ^ x2 ^ x3;
	y4 = y1 ^ y2 ^ y3;

	cout << x4 + 1 << " " << y4 + 1;

}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	solution();
	return 0;
}
