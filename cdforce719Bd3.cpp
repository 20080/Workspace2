#include <bits/stdc++.h>

using namespace std;
#define ll long long

ll solution() {
	ll z;
	cin >> z;
	ll temp = 9;
	ll num = 11;
	if (z <= 9)
		return z;
	else {
		int len = 2;
		ll adder = 11;
		while (num <= z) {
			if (len < to_string(num).length())
			{
				len++;
				adder = stoll(to_string(adder) + "1");
				num = adder;
				continue;
			}
			num += adder;
			// cout << num << " ";
			temp += 1;
		}
	}

	return temp;

}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
