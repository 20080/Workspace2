#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int T = 0;
	cin >> T;
	while (T-- > 0) {
		int A, B;
		cin >> A >> B;
		vector<int> Z;
		int t = 0;
		for (int i = 0; i < A; ++i)
		{
			cin >> t;
			Z.push_back(t);
		}
		int div = 0;
		for (int i = 0; i < Z.size(); i++) {

			if (Z[i] % 2 == 0) {
				div = Z[i];
				while (div % 2 == 0) {
					Z.push_back(Z[i] / 2);
					div /= 2;
				}

			}

			cout << Z.size() << endl;
		}
		int sum = 0;
		for (int i = 0; i < Z.size(); i++)
			sum += Z[i];
		cout << sum << endl;

	}
}