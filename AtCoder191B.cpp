#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll N, X;
	cin >> N >> X;
	bool cc = false;
	vector<ll>ar;

	while (N--) {
		ll temp = 0;
		cin >> temp;
		if (temp == X)
			continue;
		ar.push_back(temp);
	}

	if (ar.empty())
		cout << "";
	else {
		for (ll i : ar) {
			cout << i << " ";
		}
	}


}