#include<bits/stdc++.h>
using namespace std;

string ans = "";
void solution(int source, int destination, int aux, int n, int &count) {
	count++;
	if (n == 1) {
		ans += to_string(source) + " " + to_string(destination) + "\n";
		return;
	}
	else {
		solution(source, aux, destination, n - 1, count);
		ans += to_string(source) + " " + to_string(destination) + "\n";
		solution(aux, destination, source, n - 1, count);

	}
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;
	int count = 0;
	solution(1, 3, 2, n, count);
	cout << count << endl << ans;
}