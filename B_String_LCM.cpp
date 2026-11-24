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
    string a, b;
    cin >> a >> b;
    ll n1 = sz(a);
    ll n2 = sz(b);
    // ll val = __gcd(n1,n2);
    ll val = lcm(n1, n2);
    if (a + b == b + a)
    {
        if (sz(a) == val)
        {
            cout << a << nl;
            return;
        }
        else if (sz(b) == val)
        {
            cout << b << nl;
            return;
        }
        else
        {
            string ans = a;
            while (sz(ans) < val)
            {
                ans = ans + a;
            }
            cout << ans << nl;
            return;
        }
    }
    else
        cout << -1 << nl;
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