#include <bits/stdc++.h>

using namespace std;
#define ll unsigned long long


ll solution()
{

	ll n;	
	cin>>n;
	n--;
	ll range = ((1 << n));
	return range%1000000007;
	
}

int main() {
	int t;
	cin >> t;
	while (t--)
		cout << solution() << endl;
	return 0;
}
