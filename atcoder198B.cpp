#include <bits/stdc++.h>

using namespace std;
#define ll long long


bool palin(string g) {

	stack<char> s;
	s.push('$');
	for (char c : g) {
		s.push(c);
	}

	for (char c : g)
	{
		if (c != s.top())
			return false;
		s.pop();
	}

	return true;

}


bool stringtester(string k) {

	if (palin(k))
		return true;

	int ind = k.length() - 1;

	if (k[ind] != '0')
		return false;

	string re = "";
	while (k[ind--] == '0') re += '0';

	re += k;
	if (palin(re))
	{
		return true;
	}


	return false;
}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	string t;
	cin >> t;
	if (stringtester(t))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
