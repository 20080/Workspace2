#include <bits/stdc++.h>

using namespace std;
#define ll long long


int worthyBitch() {

	int len;
	cin >> len;

	vector<int>arr(len, 0);
	vector<int>stor(200, 0);
	int ans = -1;

	for (int i = 0; i < len; ++i)
	{
		cin >> arr[i];
		stor[arr[i]]++;
	}

	for (int i = 0; i < 20; 0 ++i)
	{
		// cout << stor[i] << endl;
		if (stor[i] == 1) {
			ans = i;
			break;
		}
	}

	// cout << "NL\n";

	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == ans)
			return i + 1;
	}

	return ans;

}


int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
		cout << worthyBitch() << endl;
	return 0;
}
