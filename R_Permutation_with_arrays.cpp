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
    vi a(n), b(n);
    fr(i, 0, n) cin >> a[i];
    fr(i, 0, n) cin >> b[i];
    sort(all(a));
    sort(all(b));
    fr(i, 0, n)
    {
        if (a[i] != b[i])
        {
            cout << "no\n";
            return;
        }
    }
    cout << "yes\n";
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