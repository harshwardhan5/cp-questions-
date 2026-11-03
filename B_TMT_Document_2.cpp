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
    take(n);
    string s;
    cin >> s;
    ll totalM = count(all(s), 'M');
    ll totalT = count(all(s), 'T');
    if (totalT != 2 * totalM)
    {
        cout << "NO\n";
        return;
    }
    vi pre(n);
    pre[0] = (s[0] == 'T');
    fr(i, 1, n)
    {
        pre[i] = pre[i - 1] + (s[i] == 'T');
    }
    vi suf(n);
    suf[n - 1] = (s[n - 1] == 'T');
    for (ll i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + (s[i] == 'T');
    }
    ll cntM = 0;
    fr(i, 0, n)
    {
        if (s[i] == 'M')
        {
            cntM++;
            if (pre[i] < cntM || suf[i] < totalM - cntM + 1)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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