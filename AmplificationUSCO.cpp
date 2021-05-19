/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: surajku1
TASK: test
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main() {
	ofstream fout ("cowsignal.out");
	ifstream fin ("cowsignal.in");
	int n, m, x;
	fin >> n >> m >> x;
	vector<string>ans;
	for (int i = 0; i < n; ++i)
	{
		string d;
		fin >> d;
		string a = "";
		string temp = "";
		for (int i = 1; i <= d.size(); ++i)
		{	temp = d[i - 1];
			// fout << temp;
			for (int i = 0; i < x; ++i)
				a += temp;
		}
		// fout << endl;
		for (int i = 0; i < x; ++i)
			ans.push_back(a);


	}



	for (auto x : ans)
		fout << x << endl;







	return 0;
}