#include<iostream>
using namespace std;

int a [1000];

int fact(int a[], int s, int n) {


	int c = 0;
	for (int i = 0; i < s; ++i)
	{
		int product = a[i] * n + c;
		a[i] = product % 10;
		c = product / 10;
	}

	while (c) {
		a[s] = c % 10;
		c = c / 10;
		s++;
	}

	return s;
	// //5*4*3*2 //6*4
	// //24 4
	// int i = 0;
	// int c = 0;
	// int product = n * a[i] + c;
	// // while (product > 10) {
	// //
	// a[i] = product % 10;

	// c = product / 10;

	// // product = product / 10;
	// i++;

	// //[4 | 0 | 0 | 0 | 0]
	// // }
	// while (c) {
	// 	a[i] = c % 10;
	// 	i++;
	// 	c = c / 10;
	// }
	// n--;
}




int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	a[0] = 1;
	int s = 1;
	cin >> n;


	for (int i = 2; i <= n; i++) {
		s =  fact(a, s, i);
	}

	for (int i = s - 1; i >= 0; i--) {
		cout << a[i];
	}

}