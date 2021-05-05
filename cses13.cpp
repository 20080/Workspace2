#include<bits/stdc++.h>
using namespace std;


string solution() {

	int n;
	cin >> n;


	string ans;

	for (int i = 0; i < (1 << n); i++)

	{
		int val = (i ^ (i >> 1));
		// Using bitset

		bitset<16> r(val);

		// Converting to string
		string s = r.to_string();
		ans += s.substr(16 - n) + "\n";
	}

	return ans;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << solution() << endl;


}