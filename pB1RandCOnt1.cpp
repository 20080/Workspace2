#include <bits/stdc++.h>

using namespace std;
#define ll long long


int solution() {
	int N, C;
	cin >> N >> C;
	int ans = 0;
	vector<int>arr(N, 0);
	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}


	for (int i = 0; i < N; i++) {
		set<int>z;
		for (int j = i; j < C + i && j < N; ++j)
		{
			// cout << arr[j] << " ";
			z.insert(arr[j]);
		}

		// cout << endl;
		ans = ans > z.size() ? ans : z.size();
	}


	return ans;



}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution() << endl;
	return 0;
}
