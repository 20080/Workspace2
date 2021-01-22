#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FOR(i,a,b) for(int (i) = (a); (i) < (b); ++(i))
#define RFOR(i,a,b) for(int (i) = (a)-1; (i) >= (b); --(i))
#define CLEAR(a) memset((a),0,sizeof(a))
#define INF 1000000000
#define PB push_back
#define ALL(c) (c).begin(), (c).end()
#define pi 2*acos(0.0)
#define SQR(a) (a)*(a)
#define MP make_pair
#define MAX 128


void solve() {
	ll n, c;
	cin >> n >> c;
	ll a[n];


	for (ll i = 0; i < n; ++i)
	{	cin >> a[i];
		c -= a[i];
	}

	if (c < 0)
		cout << "No\n";
	else
		cout << "Yes\n";
	int ans = 0;
	for (int i = 3; i <= 10; i++) {
		if (i % 5 == 0 || i % 3 == 0) {
			ans += i;

			std::cout << i << " ";
		}
	}

}

















int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int test ;
	cin >> test;

	while (test--) {
		solve();
	}



}