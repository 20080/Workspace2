#include <bits/stdc++.h>

using namespace std;
#define ll long long


int solver(char board[][8]) {

	return 9;
}


int solution() {
	char board[8][8];

	for (int i = 0; i < 8; ++i)
		for (int j = 0; j < 8; ++j)
			cin >> board[i][j];

	return solver(board);

}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}
