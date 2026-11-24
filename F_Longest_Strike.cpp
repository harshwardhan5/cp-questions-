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
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> um;
    fr(i, 0, n)
    {
        ll x;
        cin >> x;
        um[x]++;
    }
    vi a;
    for (auto &x : um)
    {
        if (x.second >= k)
        {
            a.pb(x.first);
        }
    }
    sort(all(a));
    ll curr = 1, best = 0;
    ll start = -1, ansL = -1, ansR = -1;

    for (ll i = 0; i < sz(a); i++)
    {
        if (i > 0 && a[i] == a[i - 1] + 1)
        {
            curr++;
        }
        else
        {
            curr = 1;
            start = a[i];
        }

        if (curr > best)
        {
            best = curr;
            ansL = start;
            ansR = a[i];
        }
    }
    if (best == 0)
        cout << -1 << nl;
    else
        cout << ansL _ ansR << nl;
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