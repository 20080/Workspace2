#include<iostream>
using namespace std;



int main() {

#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int  number;

	cin >> number;

	int n = 1;

	while (n <= 10) {
		cout << number << " x " << n << " = " << n*number << endl;
		n++;

	}

}