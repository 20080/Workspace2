#include<bits/stdc++.h>
using namespace std;
#define ll long long

string solve() {

	int A[26] = {0};

	string s1;
	string s2;
	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); i++) {
		A[s1[i] - 'a']++;
	}
	for (int i = 0; i < s2.size(); i++) {
		if (A[s2[i] - 'a'] > 0)
			return "YES";
	}

	return "NO";


}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	int test = 0;
	cin >> test;

	while (test--) {
		cout << solve() << endl;
	}
}