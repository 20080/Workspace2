#include <bits/stdc++.h>
using namespace std;

vector<int> subset;

void search(int k) {
	if (k == 4) {
		for (int i = 0; i < subset.size(); ++i)
		{
			cout << subset[i] << " ";
		}
		cout << endl;
	}

	else {
		subset.push_back(k);
		search(k + 1);
		subset.pop_back();
		search(k + 1);
	}
}


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	search(1);


}