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
    ll n, m;
    cin >> n >> m;
    unordered_map<string, string> um;
    map<string, ll> parti;
    map<string, ll> contri;
    fr(i, 0, n)
    {
        string s1, s2;
        cin >> s1 >> s2;
        um[s1] = s2;
        parti[s1] = 0;
        contri[s2] = 0;
    }
    fr(i, 0, m)
    {
        string s;
        cin >> s;
        parti[s]++;
        contri[um[s]]++;
    }
    string pmax;
    string cmax;
    ll pval = -1;
    ll cval = -1;
    for (auto &x : parti)
    {
        if (x.second > pval)
        {
            pval = x.second;
            pmax = x.first;
        }
    }
    for (auto &x : contri)
    {
        if (x.second > cval)
        {
            cval = x.second;
            cmax = x.first;
        }
    }
    cout << cmax << nl;
    cout << pmax << nl;
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