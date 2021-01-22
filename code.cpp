#include<bits/stdc++.h>
using namespace std;

#define z for(int i=0;i<n;i++)

int gcd(int a, int b) {
	int max = 0, n = 0, c = 0;

	n = a < b ? a : b;
	for (int i = 1; i < n; i++) {
		if (a % i == 0 && b % i == 0)
			c = i;
		max = max < c ? c : max;

	}
	return max;
}

vector<int> solve (int N, int G, vector<int> A) {
	// Type your code here
	vector<int> ans(N, 0);

	for (int i = 0; i < N; i++) {
		for (int j = i; j < N;) {
			if (j == i) {
				j++;
				continue;
			}

			if ((__gcd(A[i], A[j]) == G) && (j > i)) {
				ans[i] = 1;
				i++;

			}
			else {
				j++;
			}
		}
	}
	return ans;
}

int fun(int m[], int n)
{
	int value = 0, last;
	for (int i = 0; i < n; i++)
	{
		value += m[i];
	}

	last = (n * (n - 1)) / 2;
	return (value - last);
}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n[5] = {1, 2, 6, 6, 5};

	cout << (n, 5);
}