#include <bits/stdc++.h>
using namespace std;

static long findMissing(std::vector<long> list) {

	std::map<long, long>m;
	long d = 0;
	long prevd = -1;
	long md = 0;
	m[list[0]]++;
	m[list[1]]++;
	prevd = list[1] - list[0];
	for (long i = 2; i < list.size(); i++) {

		m[list[i]]++;
		// d = list[i] - list[i - 1];
		// if (d == prevd)
		// 	md = d;
	}
	// cout << (list[list.size() - 1] - list[0]) << endl;
	// cout << (list.size() - 1) << endl;
	md = (list[list.size() - 1] - list[0]) / (list.size() - 1);

	// if (list.size() == 3)
	// 	md = d < prevd ? d : prevd;

	long ans = 0;
	int lim = list[list.size() - 1];
	for (long i = list[0]; i < lim; i += md) {
		// std::cout << m[i] << endl;
		if (!m[i])
			return i;
	}
	return md;



}
int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << findMissing({ -4, 0, 2, 4, 6 , 8, 10, 12});

}