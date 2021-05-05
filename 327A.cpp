#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string solution() {

	int N;
	cin >> N;

	int a[N];
	int b[N];
	int count1 = 0;
	int i = 0;
	bool all1 = true;
	for (int &x : a) {
		cin >> x;
		if (x == 1)
			count1++;
		else
			all1 = false;
	}
	int ans = 0;
	int temp = 0;
	for (int i = 0; i < N; i++) {
		if (a[i])
			b[i] = -1;
		else
			b[i] = 1;
		temp += b[i];
		if (temp < 0)temp = 0;
		ans = max(ans, temp);
	}

	// bool f = true;
	// int mx = 0;
	// for (int &x : a) {
	// 	mx = max(count1, mx);
	// 	if (x & f) {
	// 		f = false;
	// 		continue;
	// 	}
	// 	f = false;
	// 	if (x == 1)
	// 	{
	// 		count1--;
	// 		x = count1;
	// 	}
	// 	else if (x == 0) {
	// 		count1++;
	// 		x = count1;
	// 	}


	// 	// cout << x << " ";

	// }
	return to_string((all1 ? (ans + count1) - 1 : (ans + count1)));
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << solution() << endl;


}