#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solution();
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solution();
	return 0;
}


void solution() {

	int N, K;
	cin >> N >> K;
	int difference[N + 1] = {0};
	int ans[N] = {0};

	while (K--) {
		int a, b;
		cin >> a >> b;
		a--;
		b--;
		difference[a]++;
		difference[b + 1]--;

	}

	int tot = 0;
	for (int i = 0; i < N; ++i)
	{
		tot += difference[i];
		ans[i] = tot;
	}

	sort(ans, ans + N);
	cout << ans[N / 2] << endl;

}