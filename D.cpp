#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll solution() {

	int N;
	cin >> N;

	list<ll>*ar = new list<ll>[10000];

	for (int i = 0; i < N - 1; ++i)
	{
		int u, v;
		cin >> u >> v;
		ar[u].push_back(v);

	}

	for (auto x : ar[1])
		cout << x << " ";
	return 00;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
