#include <bits/stdc++.h>

using namespace std;
#define ll long long


string solution() {

	int n;
	cin >> n;
	int w;
	cin >> w;


	vector<int> weights;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		int x;
		cin >> x;
		weights.push_back(x);
		sum += x;
	}


	if (sum == w)
		return "No";

	string ans = "";
	sum = 0;
	for (int i = 1; i < n; i++) {

		sum += weights[i - 1];
		if (sum == w)
			swap(weights[i - 1], weights[i]);

	}

	ans += "Yes\n";

	for (int x : weights)
	{
		ans += to_string(x) + " ";
	}

	return ans;

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
