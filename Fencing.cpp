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
    ll n, m, k;
    cin >> n >> m >> k;
    set<pair<ll, ll>> s;
    fr(i, 0, k)
    {
        pair<ll, ll> a;
        cin >> a.first >> a.second;
        s.insert(a);
    }
    k = sz(s);
    ll ans = 0;
    for (auto &x : s)
    {
        if (s.find({x.first, x.second + 1}) != s.end())
            ans++;
        if (s.find({x.first + 1, x.second}) != s.end())
            ans++;
    }
    cout << 4 * k - 2 * ans << nl;
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