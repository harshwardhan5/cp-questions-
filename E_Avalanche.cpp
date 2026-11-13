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

    vi a(n);
    fr(i, 0, n) cin >> a[i];

    vi moves(n, 0), suf(n + 1, 0);

    for (ll i = n - 1; i >= 0; i--)
    {
        ll l = i + 1;
        ll r = min(n, i + k + 1);

        moves[i] = (a[i] % 2) ^ suf[l] ^ suf[r];

        suf[i] = moves[i] ^ suf[i + 1];
    }

    cout << (suf[0] ? "Alice" : "Bob") << nl;
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