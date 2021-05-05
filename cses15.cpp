#include<bits/stdc++.h>
using namespace std;

string ans = "";
int c;
string solution(string p) {

	do {
		c++;
		ans += p + "\n";
	}
	while (next_permutation(p.begin(), p.end()));

	return ans;
}


bool choosen[(int)10e6] = {false};
string temp = "";
set<string>se;
void search(string p) {
	c++;
	if (temp.length() == p.length()) {
		ans += temp + "\n";
		se.insert(temp);
	}

	else {
		for (int i = 0; i < p.size(); ++i)
		{
			if (choosen[i])continue;
			choosen[i] = true;
			temp += p[i];
			search(p);
			choosen[i] = false;
			temp.pop_back();
		}

	}

}


void gfg(string s, int l, int r) {
	if (l == r) {
		ans += s + "\n";
	}
	else {
		for (int i = l; i <= r; ++i)
		{
			swap(s[l], s[i]);
			gfg(s, l + 1, r);
			swap(s[l], s[i]);
		}
	}
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string p;
	cin >> p;
	int n = p.size();
	// sort(p.begin(), p.end());
	// search(p);
	// cout << se.size() << endl;
	// for (auto x : se) {
	// 	cout << x << endl;
	// }
	// cout << c;
	// cout << solution(p);
	// cout << c;
	gfg(p, 0, n - 1);
	cout << ans;

}