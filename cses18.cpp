#include <bits/stdc++.h>

using namespace std;
#define ll long long int

// int solution() {
//    ll n;
//    cin >> n;

//    ll len = 1;
//    ll cnt = 9;
//    ll sub = 0;
//    ll mul = 1;
//    ll ans = 0;
//    while (n > cnt * len) {
//       sub = cnt * len;
//       cnt *= 10;
//       mul *= 10;
//       len++;
//    }
//    n = n - sub;

//    cout << n << " ";

//    return 0;

// }



int solution() {
   ll n;
   cin >> n;
   long long len = 1;
   long long cnt = 9;
   long long start = 1;
   while (n > len * cnt) {
      n -= len * cnt;
      cnt *= 10;
      start *= 10;
      len++;
   }

   start += (n - 1) / len;
   cout << start << " gg";
   string s = to_string(start);
   return s[(n - 1) % len] - '0';
}




int main() {
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
   int t;
   cin >> t;
   while (t--)
      cout << solution() << endl;
   return 0;
}
