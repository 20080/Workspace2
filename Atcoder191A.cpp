#include<iostream>
using namespace std;

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int V, T, S, D;
	cin >> V >> T >> S >> D;

	if (D < T * V || D > V * S)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}