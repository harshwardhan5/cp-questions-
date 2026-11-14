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
    set<int> evenValues;
    fr(i, 0, n)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            evenValues.insert(x);
    }
    ll ans = 0;
    while (sz(evenValues))
    {
        ll val = *evenValues.rbegin();
        evenValues.erase(val);
        val = val / 2;
        if (val % 2 == 0)
            evenValues.insert(val);
        ans++;
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