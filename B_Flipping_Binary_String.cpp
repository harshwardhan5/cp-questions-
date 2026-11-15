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
    string s;
    cin >> s;
    ll count0 = count(all(s), '0');
    ll count1 = n - count0;
    ll ans = -1;
    if (count0 & 1)
    {
        cout << count0 << nl;
        fr(i, 0, n)
        {
            if (s[i] == '0')
            {
                cout << i + 1 << " ";
            }
        }
        cout << nl;
    }
    else if (count1 % 2 == 0)
    {
        cout << count1 << nl;
        if (count1 > 0)
        {
            fr(i, 0, n)
            {
                if (s[i] == '1')
                    cout << i + 1 << " ";
            }
            cout << nl;
        }
    }
    else
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