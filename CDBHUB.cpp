#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll solve() {
    int N;
    cin >> N;
    vector<ll> bois(N, 0);
    vector<ll> gurls(N, 0);

    for (int i = 0; i < N; ++i) {
        cin >> bois[i];
    } for (int i = 0; i < N; ++i) {
        cin >> gurls[i];
    }

    sort(bois.begin(), bois.end());
    sort(gurls.begin(), gurls.end(), greater<>());
    ll high = 0;
    for (int i = 0; i < N; ++i) {
        high = max(high, bois[i] + gurls[i]);
    }
    return  high;
}

int main() {

//#ifndef ONLINE_JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//#endif
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;


    return 0;
}
