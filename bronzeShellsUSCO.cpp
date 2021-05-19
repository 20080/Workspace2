/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: confusedboi
TASK: shell
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main() {
	ofstream fout ("shell.out");
	ifstream fin ("shell.in");
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	int shell[3], counter[3] = {0};
	for (int i = 0; i < 3; ++i)
	{
		shell[i] = i;
	}
	int n;
	fin >> n;

	while (n--) {
		int a, b, g;
		fin >> a >> b >> g;
		a--;
		b--;
		g--;
		swap(shell[a], shell[b]);
		++counter[shell[g]];

	}

	fout << max(counter[0], max(counter[1], counter[2]));

	return 0;
}