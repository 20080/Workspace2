#include<bits/stdc++.h>
using namespace std;


void solve() {

	string x;
	cin >> x;

	bool all9 = true;

	vector<int> num;
	for (char c : x) {
		if (c != '9')
			all9 = false;
		num.push_back(c - 48);
	}
	if (all9) {
		cout << '1';
		for (int i = 0; i < x.length() - 1; ++i)
		{
			cout << '0';
		}
		cout << '1' << endl;
	}

	else {
		int mid = x.length() / 2;
		int i = mid - 1;

		int j = (x.length() % 2) ? mid + 1 : mid;

		bool leftsmaller = false;

		while (i >= 0 && num[i] == num[j])i--, j++;

		if (num[i] < num[j] || i < 0) leftsmaller = !leftsmaller;


		while (i >= 0) num[j++] = num[i--];

		if (leftsmaller) {
			int carry = 1;

			if (x.length() % 2 == 1) {
				num[mid] += 1;
				carry = num[mid] / 10;
				num[mid] %= 10;
			}

			i  = mid - 1;
			j  = (x.length() % 2) ? mid + 1 : mid;

			while (i >= 0 && carry > 0) {
				num[i] = num[i] + carry;
				carry = num[i] / 10;
				num[i] %= 10;
				num[j++] = num[i--];
			}
		}

		for (int i = 0; i < num.size(); i++) {
			cout << num[i];
		}
		cout << endl;

	}
}


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
		solve();

}