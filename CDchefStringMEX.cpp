#include <bits/stdc++.h>

using namespace std;
#define ll long long


string MEX() {

	string s;
	cin >> s;
	string ans = "";
	vector<int>one;
	vector<int>zero;
	int count = 0, ncount = 0;

	for (int i = 0; i < s.length(); i++) {

		if (s[i] == '0')
			count++;


		else
			ncount++;
		zero.push_back(count);
		one.push_back(ncount);


	}

	for (int i = 0; i < zero.size(); i++)
		cout << one[i];

	cout << endl << (5 << 3	);


	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << MEX() << endl;
	return 0;
}
