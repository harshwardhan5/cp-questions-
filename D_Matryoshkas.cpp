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

    map<ll, ll> mp;

    fr(i, 0, n)
    {
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll prev = mp.begin()->second;
    ll ans = prev;
    ll val = mp.begin()->first;

    auto it = mp.begin();
    it++;

    for (; it != mp.end(); it++)
    {
        auto x = *it;

        if (x.first == val + 1)
        {
            if (x.second > prev)
                ans += x.second - prev;
        }
        else
        {
            ans += x.second;
        }

        prev = x.second;
        val = x.first;
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