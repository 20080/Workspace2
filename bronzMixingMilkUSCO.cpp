/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: confusedboi
TASK: mixmilk
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

const int N = 3;
int capacity[N], milk[N];

int main() {
	ofstream fout ("mixmilk.out");
	ifstream fin ("mixmilk.in");
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif
	fin >> capacity[0] >> milk[0];
	fin >> capacity[1] >> milk[1];
	fin >> capacity[2] >> milk[2];

	for (int i = 0; i < 100; ++i) {

		int l = i % N;
		int m = (i + 1) % N;
		int amount = min(milk[l], capacity[m] - milk[m]);
		milk[l] -= amount;
		milk[m] += amount;

	}

	fout << milk[0] << "\n" << milk[1] << '\n' << milk[2] << '\n';


	return 0;
}