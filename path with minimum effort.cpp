#include<bits/stdc++.h>
using namespace std;


string solve(int len, int val) {
	map<int, char>m;
	int i = 1;
	for (char a = 'a'; a <= 'z'; a++) {
		m[i] = a;
		i++;
	}

	//map m is available

	int j = 1;
	int dif = val - len;
	string s = "";
	while (dif >= 26) {
		len--;
		s += m[26];
		// dif -= 26;

		val -= 26;
		dif = val - len;
		cout << j++ << " ";
	}
	cout << len;
	// cout << m[abs(len - val) + 1] << endl;
	while (len > 0) {
		s += m[abs(len - val) + 1];
		//val =21
		val -= abs(len - val) + 1;
		len--;
	}
	reverse(s.begin(), s.end());
	return s;




}



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int len, val;
	cin >> len >> val;

	cout << solve(len, val) << endl;

}