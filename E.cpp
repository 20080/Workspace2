#include<iostream>
using namespace std;
typedef int ll;

// ll ans[(ll) 4e6 + 5];
// ll bitch[(ll)4e6 + 5];

// void solution() {
// 	int N = 4e6 + 5;

// 	// int bitch[N],ans[N];

// 	for (int i = 0; i < N; i++) {

// 		bitch[i] = i;

// 		ans[i] = 0;

// 	}

// 	for (int i = 2; i < N; i++) {

// 		if (bitch[i] == i) {

// 			bitch[i] = i - 1;

// 			for (int j = 2 * i; j < N; j += i)

// 				bitch[j] = (bitch[j] / i) * (i - 1);

// 		}

// 	}

// 	for (int i = 1; i < N; i++) {

// 		ans[i] += i - 1;

// 		for (int j = 2 * i; j < N; j += i) {

// 			ans[j] += i * ((1 + bitch[j / i]) / 2);

// 		}

// 	}
// }

int main() {

	// clock_t begin = clock();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);

	cin.tie(0);

	ll N = 4e6 + 5;

	ll bitch[N], ans[N];

	for (ll i = 0; i < N; i++) {

		bitch[i] = i;

		ans[i] = 0;

	}

	for (ll i = 2; i < N; i++) {

		if (bitch[i] == i) {

			bitch[i] = i - 1;

			for (ll j = 2 * i; j < N; j += i)

				bitch[j] = (bitch[j] / i) * (i - 1);

		}

	}

	for (ll i = 1; i < N; i++) {

		ans[i] += i - 1;

		for (ll j = 2 * i; j < N; j += i) {

			ans[j] += i * ((1 + bitch[j / i]) / 2);

		}

	}

	ll t;

	cin >> t;

	while (t--) {

		ll k;

		cin >> k;

		cout << ans[4 * k + 1] << "\n";

	}
	// printf("computed in = %.12fs\n", (double)(clock() - begin) / CLOCKS_PER_SEC);
	return 0;

}
