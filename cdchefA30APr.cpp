#include <bits/stdc++.h>

using namespace std;
#define ll long long


string solution() {
	int l;
	cin >> l;
	string s;
	cin >> s;

	double ans = 0;
	double ones = 0;
	for (double i = 1; i <= l; ++i)
	{
		if (s[i - 1] == '1') {
			ones++;
			ans =  ones / i;
		}
		if (ans >= 0.5)
		{
			return "Yes";
		}
	}

	return "No";
}

int main() {
//#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}