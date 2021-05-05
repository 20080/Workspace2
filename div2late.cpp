#include <bits/stdc++.h>

using namespace std;
#define ll long long

int solution(int N) {
	int z = 2;
	while (z < N) {
		z = z * 2;
	}

	if (z == N)
		return 0;

	while (N % 2 == 0) {
		N >>= 1;
	}
	int total = 0, ans = 0;
	while (N >>= 1) {
		total++;
		if (N & 1) {
			total = 0;

		}
		else {
			cout << total;
			ans = ans >= total ? ans : total;
		}

	}

	return ans;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution(2147483647) << endl;
	return 0;
}
