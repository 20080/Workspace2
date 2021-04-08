#include<bits/stdc++.h>
using namespace std;

#define ll long long

string find() {
	ll size, stronk;
	cin >> size >> stronk;

	string s = "";
	cin >> s;

	bool pr = false;
	ll count = 0, max = 0;
	for (char c : s) {
		if (c == '*')
			pr = true;
		else
			pr = false;
		if (pr) {
			count++;
			max = count > max ? count : max;
			if (max >= stronk)
				return "Yes";
		}
		else
		{

			count = 0;
		}

	}

	if (max >= stronk)
		return "Yes";
	return "No";

}


int main() {

// # ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	// clock_t start, end;
	// start = clock();
	int t;
	cin >> t;
	while (t--)
		cout << find() << endl;
	// end = clock();
	// double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	// cout << fixed << time_taken << setprecision(5);
}