#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> solve(vector<int> &grades) {


	int tem = 0;
	for (int i = 0; i < grades.size(); i++) {
		if (grades[i] >= 38 && grades[i] <= 40)
			grades[i] = 40;
		if (grades[i] > 40) {
			tem = grades[i];
			if (tem % 5 == 0)
				continue;
			else {
				while (tem % 5 != 0) {
					tem++;
				}
				if ((tem - grades[i]) < 3) {
					grades[i] = tem;
				}
			}
		}


	}

	return grades;
}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	int test = 0;
	cin >> test;
	vector<int> ss;
	for (int i = 0; i < test; i++) {
		int z = 0;
		cin >> z;
		ss.push_back(z);
	}

	{
		std::vector<int> v = solve(ss);
		for (int i = 0; i < ss.size(); ++i)
		{
			cout << ss[i] << endl;
		}
	}
}