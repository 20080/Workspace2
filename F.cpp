#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

ll ans;

vector<vector<int>> v;

vector<ll> dp, tot;


void dfs(int cur, int par)

{

    dp[cur] = 1, tot[cur] = 1;

    ll sum = 0, cnt = 0;
    for (int i = 0; i < v[cur].size(); i++)
        // f(i, 0, sz(v[cur]))

    {

        ll node = v[cur][i];

        if (node != par)

        {

            dfs(node, cur);

            dp[cur] += ((2 * dp[node]) % mod), dp[cur] %= mod, cnt++, tot[cur] += tot[node], tot[cur] %= mod, tot[cur] += dp[node], tot[cur] %= mod;

            sum += dp[node];

        }

    }

    for (int i = 0; i < v[cur].size(); i++)
        // f(i, 0, sz(v[cur]))

    {


        int node = v[cur][i];

        if (node != par)

        {

            tot[cur] += (dp[node] * ((sum - dp[node] + mod) % mod)) % mod;

            tot[cur] %= mod;

        }


    }


}


int main()

{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base :: sync_with_stdio(false);

    cin.tie(NULL);

    int z = 1;

    cin >> z;
    for (int i = 1; i < z + 1; i++)
        // f(i, 1, z + 1)

    {

        ans = 0;

        int n;

        cin >> n;

        v.resize(n + 1), dp.resize(n + 1), tot.resize(n + 1);
        for (int i = 0; i < n - 1; i++)
            // f(i, 0, n - 1)

        {

            int l, r;

            cin >> l >> r;

            v[l].push_back(r), v[r].push_back(l);


        }

        dfs(1, 1);

        ll ans = tot[1] % mod;

        cout << ans << "\n";

        dp.clear(), v.clear(), tot.clear();


    }

    return 0;


}