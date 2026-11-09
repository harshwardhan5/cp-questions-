#include <bits/stdc++.h>
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
    ll x, y;
    vector<vector<ll>> a(5, vector<ll>(5));
    fr(i, 0, 5)
    {
        fr(j, 0, 5)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                x = i + 1;
                y = j + 1;
            }
        }
    }

    ll ans = abs(x - 3) + abs(y - 3);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}