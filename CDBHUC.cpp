#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


void solve() {
    //district
    ll N;
    cin >> N;
    vector<ll>P(N, 0);

    for (ll i = 0; i < N; ++i)
    {
        cin >> P[i];
    }

    //queries
    ll Q;
    cin >> Q;

    ll K, X;
    vector<vector<ll>> V(Q, vector<ll>(2, 0));
    for (int i = 0; i < Q; ++i)
    {
        cin >> V[i][0];
        cin >> V[i][1];
    }
    int k = 0;
    while (Q--) {
        X = V[k][0];
        K = V[k][1];
        k++;
        ll total = 0, init = X - 1;
        for (int i = X - 1; i < N && K > 0; i++)
        {

            if (P[i] == 0)
                continue;
            if (P[i] >= K) {
                P[i] -= K;
                total += K;
                total *= abs(init - i);
                K = 0;
            }
            else {

                K -= P[i];
                total += P[i];
                total *= abs(init - i);
                P[i] = 0;

            }

            // for (int x : P)
            //     cout << x << " ";
            // cout << endl;


        }

        cout << total << endl;
    }

}



//4
//5 5 6 1
//2
//2 11
//2 3




int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();


    return 0;
}
