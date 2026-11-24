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

    vi a(n);
    fr(i, 0, n) cin >> a[i];

    vi pref(n + 1, 0);

    fr(i, 0, n)
    {
        pref[i + 1] = pref[i] + (a[i] < i + 1);
    }

    ll ans = 0;

    fr(i, 0, n)
    {
        if (a[i] < i + 1 && a[i] > 0)
        {
            ans += pref[a[i] - 1];
        }
    }

    cout << ans << nl;
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