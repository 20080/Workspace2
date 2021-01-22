#include<bits/stdc++.h>
using namespace std;


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


//uncomment for naive path count
int path = 0;
int trvpa(vector < vector<char>>v, int m, int n) {

	// cout << ++path << endl;

	if (v[m][n] == '0') {
		return 0;
	}
	// cout << "HERE" << v[m][n] << endl;
	// cout << m << " " << n << endl;
	if (m == 0 && n == 0)
		return 1;

	if (m == 0 && n > 0) {
		// if (v[m][n] == 0)
		// 	return 0;
		// else
		return trvpa(v, m, n - 1);
	}
	if (n == 0 && m > 0) {
		// if (v[m][n] == 0)
		// 	return 0;
		// else
		return trvpa(v, m - 1, n);
	}


	//cout << v[m - 1][n - 1] << endl;

	return trvpa( v, m - 1, n) + trvpa(v, m , n - 1);
	//+trvpa(m-1,n-1); if diagonals requrired..
}


int trvpaD(vector<vector<char>>v, int m, int n ) {

	int D[m][n];

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (v[i][j] == '0')
				D[i][j] = 0;
			else {
				if (i <= 0 || j <= 0)
					D[i][j] = 1;
				else if (j == 1 && i == 1)
					D[i][j] = 2;
				else {
					D[i][j] = D[i - 1][j] + D[i][j - 1];
				}
			}
		}

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

		cout << trvpaD(c, m , n );


		// for (int i = 0; i < 50; i++) {
		// 	cout << endl;
		// 	for (int j = 0; j < 50; j++)
		// 		cout << 1 << " ";
		// }
	}


}



















// for (int i = 0; i < m; i++) {
// 	cout << "\n";
// 	for (int j = 0; j < n; j++) {
// 		cout << c[i][j] << "\t";
// 	}