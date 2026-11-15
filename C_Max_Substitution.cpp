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

ll modpow(ll base, ll exp, ll mod)
{
    base %= mod;
    ll result = 1;

    while (exp > 0)
    {
        if (exp & 1)
            result = result * base % mod;

        base = base * base % mod;
        exp >>= 1;
    }

    return result;
}

void solve()
{
    ll n;
    cin >> n;

    vi a(n);
    for (auto &x : a)
        cin >> x;

    ll mx = *max_element(all(a));

    if (count(all(a), mx) != 1)
    {
        cout << 1 << nl;
        return;
    }

    map<ll, int, greater<ll>> freq;

    for (auto x : a)
        freq[x]++;

    ll total = 0;
    int i = 0;

    for (auto &pr : freq)
    {
        ll v = pr.first;
        int c = pr.second;

        i++;

        if (i == 1)
            total = (total + v % MOD) % MOD;
        else
        {
            if (c != 1)
                break;

            total = (total + modpow(v - 1, i, MOD)) % MOD;
        }
    }

    cout << total << nl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}