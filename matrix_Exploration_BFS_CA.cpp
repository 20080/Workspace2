#include <bits/stdc++.h>
using namespace std;
#define ll long long

int N, M, K;
vector<string>mat;
int dir[4][2] = {{0, 1}, {1, 0}, { -1, 0}, {0, -1}};




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cin >> N >> M >> K;
	bool visitd[N][M] = {0};
	int dist[N][M] = {0};
	for (int i = 0; i < N; ++i)
	{
		string g;
		cin >> g;
		mat.push_back(g);
	}
	int ans = 0;
	queue<pair<int, int>>que;
	int total = 0;
	for (int i = 0; i < K; ++i)
	{
		int x , y;
		cin >> x >> y;
		x--;
		y--;
		que.push({x, y});
		visitd[x][y] = 1;
	}

	while (!que.empty()) {
		auto mn = que.front();
		que.pop();
		int xx = mn.first;
		int yy = mn.second;
		for (auto di : dir) {
			int nx = xx + di[0];
			int ny = yy + di[1];

			if (nx >= N || nx < 0 || ny < 0 || ny >= M || visitd[nx][ny] || mat[nx][ny] == '#')
				continue;
			visitd[nx][ny] = 1;
			que.push({nx, ny});
			visitd[nx][ny] = true;
			dist[nx][ny] = dist[xx][yy] + 1;
			total += dist[nx][ny];
		}

	}
	cout << total << endl;
	return 0;
}