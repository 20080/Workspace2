#include<bits/stdc++.h>
using namespace std;

#define ll long long

// struct node // do using linked list later
// {
// 	int
// };


ll fib(ll n) {
	std::vector<ll> v(n * 10, 0);

	v[0] = 0;
	v[1] = 1;

	for (ll i = 2; i <= n; i++) {
		v[i] = v[i - 1] + v[i - 2];
	}

	return v[n];


}

list<int> *l;

int countp = 0;

int counta(int s, int d) {

	if (s == d)
		countp++;

	list<int>:: iterator it;

	for (it = l[s].begin(); it != l[s].end(); it++) {
		counta(*it, d);
	}

	return 0;

}


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	l = new list<int>[5];

	l[0].push_back(1);
	l[0].push_back(2);
	l[0].push_back(3);
	l[0].push_back(4);
	l[1].push_back(3);
	l[1].push_back(4);
	l[2].push_back(3);
	l[2].push_back(4);

	// counta(0, 3);
	// cout << countp;
	char z = 65;
	cout << z;
}