#include <bits/stdc++.h>

using namespace std;
#define ll long long

class EllysRansom {
public:
	string getRansom(string A, string B, string T) {

		vector<int>arr1(26, 0);
		vector<int>arr2(26, 0);

		for (int i = 0; i < A.length(); ++i)
		{
			arr1[A[i] - 'a']++;
			arr2[B[i] - 'a']++;
		}

		for (char x : T) {
			if (arr1[x] || arr2[x])
			{
				if (arr1[x] > 0) {
					arr1[x]--;

				}
			}
			else {
				return "NO SOLUTION";
			}
		}


	}



} z;


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << z.getMin("ABCDEFGHIJKLMNOPQRSTUVWXYZ") << endl;
	return 0;
}
