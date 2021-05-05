#include <bits/stdc++.h>

using namespace std;
#define ll long long

int solution() {
	int n;
	cin >> n;
	int arr[n];
	int total = 0;
	for (int &a : arr) {
		cin >> a;
		total += a;
	}
	ll min1 = INT_MAX;
	for (ll i = 0; i < (1 << n ); i++) {
		ll sum1 = 0, sum2 = 0;
		for (ll j = 0; j < n ; j++) {
			if (i & (1 << j)) sum1 += arr[j];
			else sum2 += arr[j];
		}
		min1 = min(min1, abs(sum1 - sum2));
	}

	return min1;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	// for (int msk = 0; msk < (1 << 5); ++msk)
	// 	cout << msk << " ";
	return 0;
}
