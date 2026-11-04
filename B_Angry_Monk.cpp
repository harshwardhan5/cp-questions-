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
    ll n, k;
    cin >> n >> k;
    vi a(k);
    fr(i, 0, k)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll ans = 0;
    fr (i, 0, k - 1)
    {
        if (a[i] > 1)
        {
            ans += a[i] + (a[i] - 1);
        }
        else
            ans += a[i];
    }
    cout << ans << "\n";
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