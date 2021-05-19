/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: surajku1
TASK: beads
LANG: C++
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string process (string, int);
int calc(string);


int main() {
	ofstream fout ("beads.out");
	ifstream fin ("beads.in");
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	int len;
	fin >> len;
	string k;
	fin >> k;
	int mx = 0;
	for (int i = 0; i < k.length(); ++i)
	{
		string s = process(k, i);
		int k = calc(s);
		mx = k > mx ? k : mx;
	}

	fout << mx << endl;


	return 0;
}


int calc(string st) {
	char x;
	//forwards
	int sum = 0;
	for (int i = 0; i < st.length(); ++i)
	{
		if (st[i] == 'w')
			sum++;
		else {
			x = st[i];
			for (int j = i; j < st.length(); ++j)
			{
				if (st[j] == x || st[j] == 'w')
					sum++;
				else
					break;
			}
			break;
		}

	}

	//backwards

	for (int i = st.length() - 1; i >= 0; --i)
	{
		if (st[i] == 'w')
			sum++;
		else {
			x = st[i];
			for (int j = i; j >= 0; --j)
			{
				if (st[j] == x || st[j] == 'w')
					sum++;
				else
					break;
			}
			break;
		}

	}

	if (sum > st.length())sum = st.length();

	return  sum;

}

string process (string st, int n) {


	string temp = st.substr(n);
	if (n != 0)temp += st.substr(0, n);

	return temp;

}