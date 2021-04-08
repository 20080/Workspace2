#include <bits/stdc++.h>

using namespace std;
#define ll long long


ll worthyBitch() {
    ll ans = 0;
    ll N, M, W;
    cin >> N >> M >> W;
    vector<vector<double>> mat(N + 1, vector<double>(M + 1, 0));

    for (ll i = 0; i <= N; ++i) {
        for (ll j = 0; j <= M; ++j) {
            if (i == 0 || j == 0)
                continue;
            cin >> mat[i][j];
        }
    }

    for (ll i = 0; i <= N; ++i) {
        for (ll j = 0; j <= M; ++j) {
            mat[i][j] += ans;
            ans = mat[i][j];

        }
        ans = 0;
    }


    for (ll i = 0; i <= M; ++i) {
        for (ll j = 0; j <= N; ++j) {
            ans  += mat[j][i];
            mat[j][i] = ans;

        }
        ans = 0;
    }

//    int xm = min(N,M);
//    int aaa = 0;
//    for (int i = 0; i < N; ++i) {
//        int z = 1;
//        for (int j = 0; j < M; ++j) {
//            while (z<xm){
//                if(i==0&&j==0){
//                    aaa = (i+1)
//                }
//            }
//        }
//    }
//

    ll aaa = 0;
    ll xm = min(M, N);
    for (ll x = 1; x <= xm; ++x) {
        for (ll i = x; i <= N; ++i) {
            for (ll j = x; j <= M; ++j) {
                if ((mat[i][j] + mat[i - x][j - x] - mat[i][j - x] - mat[i - x][j]) / (x * x) >= W)
                    aaa++;
            }
        }
    }

    return aaa;


//    ll allMat = (M*(M+1)*(3*N-M+1))/6;
//    ll all = 0;
    // for (ll i = 0; i < N + 1; ++i) {
    //     for (ll j = 0; j < M + 1; ++j) {
    //         cout << mat[i][j] << " ";
    //     }
    //     cout << endl;
    // }

//    ll mid = M / 2;
//    ll minn = min(M, N);
//
//    for (ll i = 0; i < N; ++i) {
//        ll k = 0;
//        for (ll j = 0; j < M; ++j) {
//
//        }
//    }

    //formula  == mat[x-1][y-1] - mat[x-1][y-order-1]-mat[x-order-1][y-1]


    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        cout << worthyBitch() << endl;
    return 0;
}
