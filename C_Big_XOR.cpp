
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define vi vector<ll>
#define take(n) ll n; cin>>n;

const int MOD = 1e9 + 7;

void solve() {
    take(n);

    ll xr = 0;
    fr(i, 1, n + 1) xr ^= i;

    ll k = 1;
    while (k * 2 <= n) k *= 2;

    ll target = 4 * k - 1;
    ll diff = xr ^ target;

    if (__builtin_popcountll(diff) % 2) {
        target--;
        diff = xr ^ target;
    }

    int p = 0;
    while ((1LL << (p + 1)) <= n) p++;

    vector<int> d(p + 1);

    d[0] = diff & 1;

    fr(i, 1, p + 1) {
        d[i] = d[i - 1] ^ ((diff >> i) & 1);
    }

    fr(i, 1, n + 1) {
        if ((i & (i - 1)) == 0) {
            cout << d[__builtin_ctz(i)] << " ";
        } else {
            cout << 0 << " ";
        }
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}
