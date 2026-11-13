#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define _ << ' ' <<
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define vi vector<ll>

const int MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    vi dp(n, -1);

    dp[0] = (s[0] == '@');

    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '*')
            continue;

        if (dp[i - 1] != -1)
            dp[i] = max(dp[i], dp[i - 1]);

        if (i >= 2 && dp[i - 2] != -1)
            dp[i] = max(dp[i], dp[i - 2]);

        if (dp[i] != -1)
            dp[i] += (s[i] == '@');
    }

    cout << *max_element(all(dp)) << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}