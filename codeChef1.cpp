#include<bits/stdc++.h>
using namespace std;

#define ll long long



int main() {

//# ifndef	ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int A, B, C;
	cin >> A >> B >> C;

	map<int, int>m;

	m[A]++;
	m[B]++;
	m[C]++;

	for (auto x : m) {
		if (x.second > 1) {
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;

	return 0;
}