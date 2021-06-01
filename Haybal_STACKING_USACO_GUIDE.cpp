#include <bits/stdc++.h>

using namespace std;
#define ll long long
void solution();
int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	solution();
	return 0;
}


void solution() {

	int N, K;
	cin >> N >> K;
	int arr[N] = {0};

	while (K--) {
		int a, b;
		cin >> a >> b;
		if (a == b) {
			arr[a]++;
			continue;
		}
		for (int i = a; i <= b; ++i)
		{
			arr[i]++;
		}
	}
	sort(arr, arr + N);
	cout << arr[N / 2] << endl;

}