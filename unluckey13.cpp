#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll solve(ll num) {

	//mat 1
	//
	int M[2][2] = {{99, -10}, {10, -1}};

	ll dp[num];
	if (num == 0)
		return 0;
	dp[0] = 10;
	dp[1] = 99;
	for (ll i = 2; i < num; i++) {
		dp[i] = ((dp[i - 1] * 10 - dp[i - 2]) % 1000000009);

	}

	return dp[num - 1] ;
}

int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//0 to 99 = 100
	//but 13 is there so 100-1
	//0-1000
	//dp for(n=1)=0
	//n[2]==1
	//n[3]==19 - 130to139(10) and 113-213-413-513-613-713-813-913(8)+1from 2 length

	//---
	//130
	//013
	//19--3 len
	//- - - -
	//2*19+3*2


	//let dp[2]==99
	//dp[1]==10
	//dp[3] == // _ _ _ ==> 1 3 x (cant accept these strings so -10)
	//						and_ x x can fill in 99 ways remaing spot suppose
	//						have any digit so 1 space gives 10 possibilities
	//						so 99*10-10 = 980

	//for four space _ _ _ _ ==> we know we can fill like this _ x x x as 980*10 ways
	//							 but if at pos x x _ _ we have 1 3 then we cant accept
	//							 those strings, so number of those strings ===
	//							 99 so 9800-99 === 9071
	// formula stands == dp[n] == dp[n-1]*10-dp[n-2];
	//requires matrix exponintiation wait.........

	int test = 0;
	cin >> test;

	while (test--) {
		ll a;
		cin >> a;
		cout << solve(a) << endl;
	}
}