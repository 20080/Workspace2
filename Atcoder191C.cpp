#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef	ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int M, N;
	cin >> M >> N;

	vector<vector<int>> mat (M , vector<int>(N, 0));

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++) {
			char z;
			cin >> z;


			if (z == '#')
				mat[i][j] = 1;
			else
				mat[i][j] = 0;

		}

	int pram = 4;
	bool mid = false;
	int sd = 0;
	bool corner = false;
	int x = INT_MIN, y = INT_MIN;
	int h = 0, m = 0;

	for (int i = 0; i < mat.size(); ++i)
	{
		vector<int> v ;
		for (int j = 0; j < mat[i].size(); ++j)
		{
			if (i == 0 || j == 0 || i == M - 1 || j == N - 1)
				continue;

			v.push_back(mat[i][j]);

			// if(mat[i][j]==1)
			// 	sd++;
			// else
			// {	if((x==1&&y==0)||(x==1&&y==N-1)||(x==M-1&&y==0))
			// 	x=i;
			// 	y=j;
			// }
			// cout << mat[i][j] << " ";
		}

		for (int k = 0; k < v.size(); k++) {
			if (v[k] == 1) {
				m = m <
			}
		}



		cout << endl;
	}

}