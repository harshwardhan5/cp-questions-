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

    string s;
    cin >> s;

    ll ones = count(s.begin(), s.end(), '1');

    ll lo = max(0LL, ones - k);
    ll hi = min(n, ones + k);
    ll newlo = lo * (lo + 1) / 2;
    ll newhi = hi * (hi + 1) / 2;
    ll res1 = n - lo;
    ll res2 = n - hi;
    ll restoflo = res1 * (res1 + 1) / 2;
    ll restofhi = res2 * (res2 + 1) / 2;

    ll val1 = 1 + newlo + restoflo;
    ll val2 = 1 + newhi + restofhi;

    cout << max(val1, val2) << nl;
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