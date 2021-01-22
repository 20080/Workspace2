#include <bits/stdc++.h>

using namespace std;

#define ll long long

int findval(string s) {
	int ans = 0;
	int pp = 0;
	for (int i = s.size() - 1; i >= 0; --i)
	{
		if (s[i] == '1')
			ans += pow(2, pp);
		pp++;
	}
	return ans
}

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int test;
	cin >> test;
	while (test--) {

		string s = "";
		int A, B;
		cin >> A >> B >> s;
		string orig = s, highstr = "";
		int ind, val = 0;
		int ans = 0;
		while (B--) {
			for (int i = 0; i < s.length(); i++) {
				string ss = "";
				char add;
				add = s[0];
				ss = s.substr(1, s.size() - 1);
				ss += add;
				s = ss;
				if (findval(ss) > val)val = findval(ss), highstr = ss, ind = i;
				//cout << findval(ss) << endl;
				if (ss == orig)
					break;
			}
			ind++;
			ans += ind;


		}
		cout << ans;
	}
}
