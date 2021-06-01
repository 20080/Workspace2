
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	int ans = 1;
	int arr[n] = {0};
	for (int i = 0 ; i < n ; i ++) {
		cin >> arr[i];
		arr[i]--;
		// int x;
		// cin >> x;
		// x--;
		// arr[x] = i;
	}
	int brr[n];
	for (int i = 0; i < n; i++)brr[arr[i]] = i;
	// int num = 0;
	for (int i = 1; i < n; i++) {
		if (brr[i] < brr[i - 1])
			ans++;
	}
	// for (int i = 0; i < n; i++) {
	// 	if (num > arr[i]) {
	// 		ans++;
	// 	}
	// 	num = arr[i];


	// }
	cout << ans;
	return 0;
}
