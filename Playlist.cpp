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

    vi a(n);
    fr(i, 0, n)
        cin >> a[i];

    set<ll> s;

    ll l = 0, ans = 0;

    fr(r, 0, n)
    {
        while (s.count(a[r]))
        {
            s.erase(a[l]);
            l++;
        }

        s.insert(a[r]);

        ans = max(ans, r - l + 1);
    }

    cout << ans << nl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
   // cin >> t;
    while (t--)
        solve();
    return 0;
}