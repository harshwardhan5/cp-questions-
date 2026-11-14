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
    if (n == 1)
    {
        cout << 0 << nl;
        return;
    }
    unordered_map<char, int> um;
    fr(i, 0, n)
    {
        um[s[i]]++;
    }
    ll ans = 0;
    ll curr = 0;
    for (auto [c, val] : um)
    {
        if (val > 1)
            ans++;
        else
            curr++;
    }
    ans += curr / 2;
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