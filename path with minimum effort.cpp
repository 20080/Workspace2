#include<iostream>
#include<map>
using namespace std;



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int len, val;
	cin >> len >> val;

	map<int, char>m;
	int i = 1;
	for (char a = 'a'; a <= 'z'; a++) {
		m[i] = a;
		i++;
	}
	for (int i = 1; i <= 26; ++i)
	{
		cout << m[i] << " ";
	}

}