/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: surajku1
TASK: friday
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int off[12] = {1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1};
int days13[7] = {0};
int main() {
	ofstream fout ("friday.out");
	ifstream fin ("friday.in");

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif


	int N ;
	fin >> N;

	int year = 1900;
	int z = 0;
	while (N--) {
		bool feb = false;
		if (year % 400 == 0)
			feb = true;
		else if (year % 4 == 0 && year % 100)
			feb = true;
		// cout << "J";
		int k = 31;

		for (int i = 1; i <= 12; ++i)
		{
			k = off[i - 1] ? 31 : 30;
			if (i == 2)
				if (feb) {
					// cout << year
					k = 29;
				}
				else
					k = 28;
			for (int j = 1 ; j <= k; j++, z++) {
				if (z == 7)
					z = 0;
				if (j == 13) {
					days13[z]++;
					// cout << z << " ";
				}
			}
		}
		year++;
	}

	string ans = to_string(days13[5]) + " " + to_string(days13[6]);
	for (int i = 0; i < 7 - 2; ++i)
	{
		ans += " " + to_string(days13[i]);
	}
	fout << ans << endl;

	return 0;
}