#include<iostream>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long N;
	cin >> N;
	long long ans = 0;
	for (long long i = 5; N / i >= 1; i = i * 5)
		ans += N / i;

	cout << ans << endl;


}