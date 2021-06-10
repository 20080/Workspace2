#include <bits/stdc++.h>

using namespace std;
#define ll long long
list<int>*graph;
// vector<int>graph;
vector<int>ans;
vector<int>comp;
bool used[200000 + 100];
void theDFS(int i) {

	used[i] = true;
	for (auto x : graph[i])
	{
		if (!used[x])
			theDFS(x);
	}

}



void solution() {
	int N, R;
	int u, v;
	cin >> N >> R;
	graph = new list<int>[200000 + 100];
	for (int i = 0; i < R; ++i)
	{
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	for (int i = 1; i <= N; ++i)
	{
		used[i] = false;
	}
	for (int i = 1; i <= N; ++i)
	{
		if (!used[i]) {
			theDFS(i);
			ans.push_back(i);
		}

	}
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solution();
	cout << ans.size() - 1 << endl;
	for (int i = 1; i < (int)ans.size(); ++i)
	{
		cout << ans[i] << " " << ans[i - 1] << endl;
	}
	return 0;
}