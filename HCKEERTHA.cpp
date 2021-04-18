#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {
	int N;
	cin >> N;
	std::vector<ll> arr(N, 0);

	for (ll i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	ll ans = 0;

	for (ll i = 0; i < N - 1; ++i)
	{
		if (arr[i] == arr[i + 1]) {
			continue;
		}
		ans++;

	}

	return to_string(ans + 1);

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}
