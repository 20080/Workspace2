#include<bits/stdc++.h>
#include <cmath>
using namespace std;

#define ll long long

// int V = 0;
// list<int>*adj;

// void countpathsUtil(int u, int d, int *pathcount) {
// 	if (u == d) {
// 		++*pathcount;
// 	}
// 	else {
// 		list<int>::iterator i;
// 		for (i = adj[u].begin(); i != adj[u].end(); ++i) {
// 			countpathsUtil(*i, d, pathcount);
// 		}
// 	}
// }


// 3 3
// . . .
// . * .
// . . .


// int countpaths(int s, int d) {
// 	int pathCount = 0;
// 	countpathsUtil(s, d, &pathCount);
// 	return pathCount;
// }


// //uncomment for naive path count
// int path = 0;
// int trvpa(vector < vector<char>>v, int m, int n) {

// 	// cout << ++path << endl;

// 	if (v[m][n] == '0') {
// 		return 0;
// 	}
// 	// cout << "HERE" << v[m][n] << endl;
// 	// cout << m << " " << n << endl;
// 	if (m == 0 && n == 0)
// 		return 1;

// 	if (m == 0 && n > 0) {
// 		// if (v[m][n] == 0)
// 		// 	return 0;
// 		// else
// 		return trvpa(v, m, n - 1);
// 	}
// 	if (n == 0 && m > 0) {
// 		// if (v[m][n] == 0)
// 		// 	return 0;
// 		// else
// 		return trvpa(v, m - 1, n);
// 	}


// 	//cout << v[m - 1][n - 1] << endl;

// 	return trvpa( v, m - 1, n) + trvpa(v, m , n - 1);
// 	//+trvpa(m-1,n-1); if diagonals requrired..
// }


// ll trvpaD(vector<vector<char>>v, int m, int n ) {

// 	ll D[m][n];

// 	for (int i = 0; i < m; i++) {
// 		for (int j = 0; j < n; j++) {
// 			if (v[i][j] == '0') // useless afer using trvpa
// 				D[i][j] = 0;
// 			else {
// 				if ((i <= 0 || j <= 0)) {
// 					D[i][j] = trvpa(v, i, j);
// 				}
// 				else if (j == 1 && i == 1)
// 					D[i][j] = trvpa(v, i, j);
// 				else {
// 					D[i][j] = D[i - 1][j] + D[i][j - 1];
// 				}
// 			}
// 		}

// 	}


// 	return D[m - 1][n - 1];
// }

int eq(int p) {
	p++;
	if (p == 1 || p == 2)
		return 1;
	return pow(2, (p - 2));
}

ll trvpaDps(vector<vector<char>>v, int m, int n) {

	if (v[m - 1][n - 1] == '*')
		return 0;


	int D[m][n] = {0};
	bool zero = false;
	for (int i = 0; i < m; i++) {
		if (v[i][0] == '*')
			zero = true;
		if (zero)
			D[i][0] = 0;
		else {
			D[i][0] = eq(i);
		}
	}
	zero = false;
	for (int j = 0; j < n; j++) {
		if (v[0][j] == '*')
			zero = true;
		if (zero)
			D[0][j] = 0;
		else {
			D[0][j] = eq(j);
		}
	}



	for (int i = 1; i < m; i++) {

		for (int j = 1; j < n; j++) {

			if (v[i][j] == '*')
				D[i][j] = 0;
			else {
				for (int k = j - 1; k >= 0; k--) {
					if (v[i][k] == '*')
						break;
					D[i][j] += D[i][k];

				}
				//cout << endl << D[1][2] << endl;;
				for (int k = i - 1; k >= 0; k--) {
					if (v[k][j] == '*')
						break;
					D[i][j] += D[k][j];
				}
			}
		}
	}

	for (int i = 0; i < m; i++) {
		cout << endl;
		for (int j = 0; j < n; j++)
			cout << D[i][j] << " ";
	}
	return D[m - 1][n - 1];

}


// int pathesnnodes(int no_of_nodes){

// }


int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T = 0;
	cin >> T;

	while (T--) {
		int m, n;
		cin >> m >> n;
		// char c[m][n];
		vector<vector<char>>c(m, (  vector<char>(n)));
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				cin >> c[i][j];

		//cout << trvpaDps(c, m , n ) % 1000000007 << endl;


		for (int i = 0; i < 1000; i++) {
			cout << endl;
			for (int j = 0; j < 1000; j++)
				cout << 1 << " ";
		}
	}


}



















// for (int i = 0; i < m; i++) {
// 	cout << "\n";
// 	for (int j = 0; j < n; j++) {
// 		cout << c[i][j] << "\t";
// 	}