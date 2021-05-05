#include <bits/stdc++.h>

using namespace std;
#define ll long long




int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	ll n;
	cin >> n;

	string ans;
	if (n == 1)
	{
		cout << "1";
		return 0;
	}
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
		return 0;
	}

	if (n % 2 == 0) {
		for (int i = 2; i <= n; i += 2)
		{
			ans += to_string(i) + " ";
		}

		for (int i = 1; i < n; i += 2)
		{
			ans += to_string(i) + " ";
		}
	}

	else {
		for (int i = n - 1; i > 0; i -= 2)
		{
			ans += to_string(i) + " ";
		}

		for (int i = n; i > 0; i -= 2)
		{
			ans += to_string(i) + " ";
		}
	}



	cout << ans << endl;
}