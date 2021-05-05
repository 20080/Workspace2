#include <bits/stdc++.h>

using namespace std;
#define ll long long


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


#include <bits/stdc++.h>

using namespace std;
#define ll long long


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	for (int i = 1; i <= t; ++i)
	{
		cout << "Case #" << i << solution() << endl;
	}

	return 0;
}
