/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: surajku1
TASK: gift1
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	ofstream fout ("gift1.out");
	ifstream fin ("gift1.in");
// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n;
	fin >> n;
	string order [n];
	unordered_map<string, int> m;
	string name;
	for (int i = 0; i < n; ++i)
	{
		fin >> name;
		order[i] = name;
		m[name] = 0;
	}

	for (int i = 0; i < n * 2; ++i)
	{
		fin >> name;
		int money, div;
		fin >> money >> div;
		int dis = 0;
		if (money && div)
			dis = money / div;
		m[name] -= money;
		m[name] += money - dis * div;

		for (int j = 0; j < div; ++j)
		{
			fin >> name;
			m[name] += dis;
		}

	}


	for (int i = 0; i < n; ++i)
	{
		fout << order[i] << " " << m[order[i]] << endl;
	}



	return 0;
}