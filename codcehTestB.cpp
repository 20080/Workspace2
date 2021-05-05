#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solution() {

	int N, M;
	cin >> N >> M;
	int tx, ty;
	cin >> tx >> ty;
	int px, py;
	cin >> px >> py;

	//race

	int po_distance = 0;
	int theif_distance = 0;
	while (px < N && py < M) {
		px++;
		py++;
		po_distance++;
	}

	if (px < N) {
		int temp = 0;
		temp = N - px;
		px += temp;
		po_distance += temp;
	}

	if (py < M) {
		int temp = 0;
		temp = M - py;
		py += temp;
		po_distance += temp;
	}


	if (tx < N) {
		int temp = 0;
		temp = N - tx;
		tx += temp;
		theif_distance += temp;
	}

	if (ty < M) {
		int temp = 0;
		temp = M - ty;
		ty += temp;
		theif_distance += temp;
	}


	return po_distance < theif_distance ? "No" : "Yes";

}

int main() {
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}

