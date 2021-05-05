#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string solution() {
	int n;
	cin >> n;
	vector<int>a(n, 0);
	vector<int>b(n, 0);
	for (int i = 0 ; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}

	map<int, int>m;
	sort(b.begin(), b.end());
	//using map as every element here supposed to be unique
//sorted element index here
	for (int i = 0 ; i < n; i++) {
		m[b[i]] = i;
	}

//which index element should be where
	for (int i = 0 ; i < n; i++) {
		a[i] = m[a[i]];
	}

	int first = -1;

	int last = -1;


	for (int i = 0; i < n; ++i)
	{
		if (a[i] != i) {
			first = i;
			break;
		}
	}

	for (int i = n - 1; i >= 0; --i)
	{
		if (a[i] != i) {
			last = i;
			break;
		}
	}

	string ans = "";

	if (first == -1 || last == -1)
	{
		return "yes\n1 1\n";
	}

	reverse(a.begin() + first, a.begin() + last + 1);

	for (int i = 0; i < n; ++i)
	{
		if (a[i] != i)
			return "no\n";
	}

	return "yes\n" + to_string(first + 1) + " " + to_string(last + 1) + "\n";

}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << solution();
}