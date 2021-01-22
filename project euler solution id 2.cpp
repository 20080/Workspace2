project euler solution id 2

#include<bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long


ll fib(ll limit) {
	ll ans = 0;
	ll efn1 = 0, efn2 = 2;
	ll sum = efn1 + efn2;

	while (efn2 <= limit) {

		ll ef3 = 4 * efn2 + efn1;

		if (ef3 > limit)
			break;

		efn1 = efn2;
		efn2 = ef3;
		sum += efn2;
	}
	return sum;

}

// ll fib(ll n) {
// 	float q = 1.618034;
// 	float q2 = 1 - 1.618034;
// 	for (ll i = 0; i < n; i++) {
// 		q *= q;
// 		q2 *= q;
// 	}

// 	double div = 2.2360679775 ;

// 	double a = (q - q2) / div;
// 	cout << a;
// 	return a;
// }

// bool ispfr(long long s) {

// 	long long x = sqrt(s);
// 	return (x * x == s);

// }


// bool isfibo(long long n)
// {
// 	return ispfr(5 * n * n + 4) || ispfr(5 * n * n - 4);
// }

int main()
{
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << fib(4000000);

}


#include<stdio.h>
int fs(int);
int main()
{
	int s = 0, i, p;
	for (i = 1; p < 4000000; i++)
	{
		p = fs(i);
		if (p % 2 == 0)
			s = s + p;
	}
	printf("%d", s);

}
int fs(int n)
{
	int t;
	switch (n)
	{
	case 1 : return 1;
	case 2 : return 2;
	default :
	{
		t = fs(n - 1) + fs(n - 2);
		return t;
	}
	}
}




//next

//largest prime factor



#include<bits/stdc++.h>
#include <math.h>
using namespace std;

#define ll long long


ll primefc(ll n) {
	ll max = 1;
	while (n % 2 == 0) {
		n = n / 2;
		max = 2;
	}

	for (ll i = 3; i <= sqrt(n); i = i + 2) {
		while (n % i == 0) {
			max = max < i ? i : max;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	return max;

}

int main()
{
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cout << primefc(600851475143);

}