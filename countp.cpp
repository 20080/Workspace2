#include<bits/stdc++.h>
using namespace std;



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T;
	cin >> T;
	while (T--)
	{

		int n = 0;
		cin >> n;
		int count = 0;
		map<int, int>m;
		vector<int> spot(n, 0);
		for (int i = 0; i < n; i++) {
			cin >> spot[i];
			m[spot[i]]++;
		}

		map<int, int> :: iterator it;

		for (it = m.begin(); it != m.end(); it++) {
			if (it->second == 1) {
				continue;
			}
			else {
				m[it->first + 1]++;
			}



		}

		cout << m.size() << endl;


	}
}