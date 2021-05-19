#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<char>arr;
	set<char>xxx;
	for (int i = 1; i < n + 1; ++i)
	{	arr.push_back(s[i - 1]);
		// cout << s[i - 1] << " ";
		xxx.insert(s[i - 1]);
		while (s[i] == s[i - 1] && i < n) {
			i++;
			continue;
		}
	}

	// for (auto x : arr)
	// 	cout << x << " ";

	return arr.size() == xxx.size() ? "Yes" : "No";


}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
