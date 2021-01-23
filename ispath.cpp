#include<bits/stdc++.h>
using namespace std;





int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int v;
	cin >> v;
	int e;
	cin >> e;
	int c = e;

	list<int>*E;
	E = new list<int>[9999];
	for (int i = 0; i < c; ++i)
	{	int a, b;
		cin >> a >> b;
		E[a].push_back(b);
	}
	int s, d;
	cin >> s >> d;
	vector<bool>visit(100000, false);
	visit[s] = true;
	list<int> q;
	q.push_back(s);
	list <int> :: iterator it;

	while (!q.empty()) {
		if (s == d)
		{
			cout << "Yes";
			break;
		}

		s = q.front();
		q.pop_front();


		for (it = E[s].begin(); it != E[s].end(); it++) {
			if (*it == d)
			{
				cout << "Yes";
				return 0;
			}
			else {
				if (!visit[*it]) {
					visit[*it] = true;
					q.push_back(*it);
				}
			}
		}




	}
	cout << "NO";
	return 0;



}