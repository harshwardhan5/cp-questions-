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
    string s;
    cin >> s;
    ll n = sz(s);
    char mn = '9';
    for (ll i = n - 1; i >= 0; i--)
    {
        char val = s[i];
        if (val > mn)
        {
            s[i] = min(char(s[i] + 1), '9');
        }
        mn = min(mn, val);
    }
    sort(all(s));
    cout << s << nl;
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