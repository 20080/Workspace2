#include <bits/stdc++.h>


using namespace std;

#define ll long long
#define mapii map<int, int>
#define mapci map<char, int>

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s = "*+*";

	stack <char> sk;

	mapci m;
	m['+'] = 1;
	m['-'] = 2;
	m['*'] = 3;
	m['/'] = 4;
	m['^'] = 5;

	sk.push('$');
	int i = 0;
	while (s[i] != '\0') {
		if (m[s[i]]) {
			if (sk.top() == '$')
				sk.push(s[i]);
			else if (m[sk.top()] > s[i]) {
				while (m[sk.top()] > s[i] || (sk.top() != '$'))
				{	cout << s[i];
					sk.pop();
				}
				sk.push(s[i]);
			}
			else {
				sk.push(s[i]);
			}


		}
		i++;
	}



}






