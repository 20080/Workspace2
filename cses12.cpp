#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	string s;
	cin >> s;

	unordered_map<char, int>um;
	for (char c : s) {
		um[c]++;
	}

	int ln = s.length();
	int oddc = 0;
	string ans;
	char xtemp;
	int xcount;

	for (auto md : um) {
		char c = md.first;
		if (md.second & 1) {
			xcount = md.second;
			xtemp = md.first;
			oddc++;
		}
		if (oddc > 1)
			return "NO SOLUTION";
		if (ln % 2 == 0 && oddc > 0)
			return "NO SOLUTION";
		if (md.second % 2 == 0) {
			int test = md.second / 2;
			while (test--) {
				ans += c;
			}
		}


	}

	string temp = ans;

	reverse(temp.begin(), temp.end());
	if (ln & 1) {
		while (xcount--)
			ans += xtemp;
	}
	ans += temp;
	return ans;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << solution() << endl;
}

