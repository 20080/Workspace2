/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: surajku1
TASK: ride
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
#define ll long long

int main() {
	ofstream fout ("ride.out");
	ifstream fin ("ride.in");
	string a, b;
	fin >> a >> b;
	int x = 1, y = 1;
	for (int i = 0; i < a.length(); ++i)
	{
		x *= a[i] - 'A' + 1;
		x %= 47;
	}

	for (int i = 0; i < b.length(); ++i)
	{
		y *= b[i] - 'A' + 1;
		y %= 47;
	}

	fout << (x == y ? "GO" : "STAY") << endl;
	return 0;
}