#include <bits/stdc++.h>

using namespace std;
#define ll long long


void solution() {

	int n;
	cin >> n;
	multiset<int>mt;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		auto ex = mt.upper_bound(k);
		// if(ex==mt.end()) mt.insert(k);

		// else{
		if (ex != mt.end())
			mt.erase(ex);
		// }
		mt.insert(k);
	}

	cout << mt.size() << endl;


}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solution();
	return 0;
}