#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


string solve() {
    int H, x, y, C;
    cin >> H >> x >> y >> C;

    //x liters are required
    int total = x + floor(y / 2);

    total *= H;
    return total <= C ? "Yes" : "No";
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
        cout << solve() << endl;


    return 0;
}
