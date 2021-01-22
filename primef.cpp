#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool v[100001];
const int LIM = 100001;
void sieve_shit() {

	memset(v, true, sizeof(v));
	vector<int> c;
	v[1] = false;
	for (int i = 2; i * i <= LIM; i++) {
		if (v[i] == true) {

			for (int j = i * 2; j <= LIM; j += i) {
				v[j] = false;
			}
		}

	}
}



// const int LIMIT = 1000000001;
// const int SQRT  = sqrt(LIMIT + 1);

void init(int, int);

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	// cin >> t;
	// while (t--) {
	// 	int a, b;
	// 	cin >> a >> b;

	// 	map<int, int>m;

	// 	for (int i = 2; i <= SQRT; i++) {
	// 		int start = max(2 * i, ((a + i - 1) / i) * i);
	// 		for (int j = start; j <= b; j = j + i)
	// 		{
	// 			m[j] = 1;
	// 		}
	// 	}


	// 	for (int i = a; i <= b; ++i)
//{
	// 		if ((m.count(i) == 0) && (i != 1))
	// 		{
	// 			cout << i << endl;
	// 		}
	// 	}



	// }


	int t;
	cin >> t;
	sieve_shit();
	while (t--) {
		int a, b;
		cin >> a >> b;
		init(a, b);

	}


}


void init(int a, int b) {

	if (a == 1)a++;

	int element = b - a + 1;

	for (int i = a; i <= b; i++)
		if (v[i])
			cout << i << endl;


}

