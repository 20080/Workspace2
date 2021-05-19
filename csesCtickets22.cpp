#include <bits/stdc++.h>
using namespace std;

#define ll long long

string solution() {
	ll n, m;
	cin >> n >> m;
	string ans = "";

	multiset<ll>ticket;

	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		ticket.insert(x);
	}

	for (int i = 0; i < m; ++i)
	{
		int x;
		cin >> x;
		auto z = ticket.upper_bound(x);

		if (z == ticket.begin())
			ans += "-1\n";
		else {
			ans += to_string(*(--z)) + "\n";
			ticket.erase(z);
		}


	}

	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}


