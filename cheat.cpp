#include<bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    int t; cin >> t;
    while (t--) {
        int N, XX; cin >> N >> XX;
        vector<int>a(N);
        for (int i = 0; i < N; i++)cin >> a[i];
        unordered_map<int, int>ma1;
        for (int i = 0; i < N; i++)ma1[a[i]] += 1;
        int res = 0;
        for (auto it = ma1.begin(); it != ma1.end(); it++) {
            res += it->second - 1;
        }
        if (res < XX) {
            cout << ma1.size() - XX + res << endl;
        }
        else {
            cout << ma1.size() << endl;
        }
    }
}
