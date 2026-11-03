#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define vi vector<ll>
#define take(n) \
    ll n;       \
    cin >> n;

const int MOD = 1e9 + 7;

void solve()
{
    take(n);
    vi a(n);
    fr(i, 0, n) cin >> a[i];

    ll ans = INT_MAX;
    ll x = a[0];
    ll cnt = 0;
    fr(i, 0, n)
    {
        if (a[i] == x)
            cnt++;
        else
        {
            ans = min(ans, cnt);
            cnt = 0;
        }
    }
    ans = min(ans, cnt);
    cout << (ans == n ? -1 : ans) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}