#include <bits/stdc++.h>

using namespace std;
#define ll long long

class EllysBalancedStrings {
public:
	int getMin(string S) {
		string const vs("aeiouAEIOU");
		int vol = std::count_if(S.begin(), S.end(),
		[&](char c) { return vs.end() != std::find(vs.begin(), vs.end(), c); });

		int cons = S.length() - vol;

		int ans = 0;

		while (cons != vol) {
			if (cons > vol) {
				cons--;
				vol++;
			}
			else {
				vol--;
				cons++;
			}
			ans++;
		}

		return ans;
	}



};


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << z.getMin("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
	return 0;
}
