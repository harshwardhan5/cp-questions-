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
    ll ans = 0;
    vi freq(k + 1, 0);
    ll dist = 0;
    ll l = 0;
    fr(r, 0, n)
    {
        if (freq[a[r]] == 0)
            dist++;

        freq[a[r]]++;

        while (dist == k)
        {
            freq[a[l]]--;

            if (freq[a[l]] == 0)
            {
                dist--;
            }
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << nl;
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