#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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
    vector<pair<ll, ll>> v(n);
    fr(i, 0, n)
    {
        cin >> v[i].first;
        v[i].second = i + 1;
    }
    sort(rall(v));
    ll ind = 1;
    vi ans(n + 1, 0);
    ll total = 0;
    for (auto [visits, idx] : v)
    {
        total += abs(ind) * visits * 2;
        ans[idx] = ind;
        if (ind < 0)
        {
            ind = -ind;
            ind++;
        }
        else
        {
            ind = -ind;
        }
    }
    cout << total << "\n";
    fr(i, 0, n + 1)
    {
        cout << ans[i] << " ";
    }
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