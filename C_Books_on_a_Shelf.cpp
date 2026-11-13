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
    fr(i, 0, n) cin >> a[i];

    sort(all(a));

    vi ans(n);

    ll ind1 = 0, ind2 = n - 1;

    for (ll i = 0; i < n - 1; i += 2)
    {
        ans[ind1++] = a[i];
        ans[ind2--] = a[i + 1];
    }

    if (n & 1)
        ans[n / 2] = a[n - 1];
    ll cnt = 0;

    for (ll i = 0; i < n;)
    {
        ll j = i;

        while (j < n && a[j] == a[i])
            j++;

        cnt += min(2LL, j - i);
        i = j;
    }

    cout << cnt << '\n';

    for (auto x : ans)
        cout << x << " ";

    cout << '\n';
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