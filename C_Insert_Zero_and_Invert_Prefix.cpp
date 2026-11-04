#include <bits/stdc++.h>
#include <cassert>
using namespace std;

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
    take(n);
    vi a(n);
    fr(i, 0, n) cin >> a[i];

    if (a[n - 1] == 1)
    {
        cout << "NO\n";
        return;
    }

    vi ans;
    // ans.pb(0);
    ll cnt = 0;
    fr(i, 0, n)
    {
        if (a[i] == 1)
            cnt++;
        else
        {
            ans.pb(cnt);
            fr(j, 0, cnt) ans.pb(0);
            cnt = 0;
        }
    }
    reverse(all(ans));
    // assert(sz(ans) == n);
    cout << "YES\n";
    for (auto x : ans)
        cout << x << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}