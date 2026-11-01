#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

using ll = long long;

void solve() {
    ll n, m, k, q;
    cin >> n >> m >> k >> q;

vector<ll> rows(k);
vector<ll> cols(k);

for (int i = 0; i < k; i++) {
    ll x, y;
    cin >> x >> y;

    rows[i] = x;
    cols[i] = y;
}
sort(rows.begin(), rows.end());
sort(cols.begin(), cols.end());

    vector<ll> ans;

    for (int i = 0; i < q; i++) {
        ll a, b, c;
        cin >> a >> b >> c;

        ll cnt = 0;

        if (a == 1) {
            cnt = upper_bound(rows.begin(), rows.end(), c) - lower_bound(rows.begin(), rows.end(), b);
        }   
        else if (a == 2) {
            cnt = upper_bound(cols.begin(), cols.end(), c) - lower_bound(cols.begin(), cols.end(), b);
        }

        ans.push_back(cnt);
    }

    for (ll x : ans) {
        cout << x << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
   // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}