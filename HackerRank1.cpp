#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector <int> solve(vector<int> &arr) {

	int lim = arr.size() / 2;
	int j = arr.size() - 1;
	for (int i = 0; i < lim; ++i)
	{
		swap(arr[i], arr[j]);
		j--;
	}
	return arr;
}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int l;
	cin >> l;
	vector<int> v;
	for (int i = 0; i < l; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}

	solve(v);

	for (int i = 0; i < l; ++i)
	{

		cout << v[i] << " ";

	}


}