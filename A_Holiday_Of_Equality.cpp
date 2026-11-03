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
    ll maxi = INT_MIN;
    fr(i, 0, n) cin >> a[i], maxi = max(maxi, a[i]);
    ll ans = 0;
    fr(i, 0, n)
    {
        if (a[i] < maxi)
            ans += (maxi - a[i]);
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}