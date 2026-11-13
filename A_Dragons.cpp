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
#define take(n) \
    ll n;       \
    cin >> n;

const int MOD = 1e9 + 7;

void solve()
{
    ll val, n;
    cin >> val >> n;
    vector<pair<ll, ll>> a(n);
    fr(i, 0, n)
    {
        cin >> a[i].first >> a[i].second;
    }
    sort(all(a));
    bool ans = true;
    fr(i, 0, n)
    {
        if (a[i].first < val)
            val += a[i].second;
        else
            ans = false;
    }

    cout << (ans ? "YES\n" : "NO\n");
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}