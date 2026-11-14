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
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, int>> a(n);
    fr(i, 0, n)
    {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(all(a));

    int l = 0, r = n - 1;
    while (l < r)
    {
        ll sum = a[l].first + a[r].first;
        if (sum == x)
        {
            cout << min(a[l].second, a[r].second) << " "
                 << max(a[l].second, a[r].second) << nl;
            return;
        }
        if (sum < x)
            l++;
        else
            r--;
    }
    cout << "IMPOSSIBLE\n";
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