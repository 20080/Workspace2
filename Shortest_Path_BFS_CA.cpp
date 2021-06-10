#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int MAX_N = 100005;
vector<int>graph[100005];
list<int> *list_graph;//option 1
vector<int>minPaths;//option 2
bool visitd[MAX_N];

void theBFS(int startNode) {
	minPaths[startNode] = 0;
	queue<int>q;
	q.push(startNode);
	visitd[startNode] = true;
	int m = 0;
	while (!q.empty()) {
		int curNode = q.front();
		q.pop();
		for (auto x : list_graph[curNode]) {
			if (!visitd[x]) {
				q.push(x);
				minPaths[x] = minPaths[curNode] + 1;
				visitd[x] = true;
			}
		}
	}

}


vector<int> solution() {

	int N, M, s;
	cin >> N >> M >> s;

	list_graph = new list<int>[N];
	int u, v;
	for (int i = 0; i < M; ++i)
	{
		cin >> u >> v;
		graph[u - 1].push_back(v - 1);
		list_graph[u - 1].push_back(v - 1);
	}
	for (int i = 0; i < N; ++i) minPaths.push_back(-1);
	theBFS(s - 1);
	return minPaths;
}



int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int>ans(solution());

	for (int x : ans)
		cout << x << " ";
	return 0;
}