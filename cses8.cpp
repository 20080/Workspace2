#include <bits/stdc++.h>

using namespace std;
#define ll long long

void solution() {
	ll N;
	cin >> N;
	ll total = (N * (N + 1)) / 2;
	if (total & 1) { cout << "NO"; return;}

	ll goal = total / 2;
	vector<ll>q(N + 1, 1);
	ll half = 0 ;
	for (ll i = 1; i <= N; ++i)
	{	half += i;
		q[i] = 0;
		if (half >= goal)
			break;

	}
	// cout << half << endl;
	// cout << goal << endl;
	if (half != goal) {
		ll temp = abs(half - goal);
		if (half > goal) {
			half -= temp;
			q[temp] = 1;
		}
		else {
			half += temp;
			q[temp] = 0;
		}
	}
	// // while (half > goal) {
	// // 	half -= i;
	// // 	q[i] = 1;
	// // 	i++;
	// // }
	// cout << half << endl;
	ll a = 0, b = 0;
	for (ll i = 1 ; i <= N; i++) {
		if (q[i] == 0)
			a++;
		else
			b++;
	}

	cout << "YES" << endl;
	cout << a << endl;
	for (ll i = 1; i <= N; ++i)
	{
		if (q[i] == 0)
			cout << i << " ";
	}
	cout << endl << b << endl;
	for (ll i = 1; i <= N; ++i)
	{
		if (q[i] == 1)
			cout << i << " ";
	}


}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solution();
	return 0;
}
