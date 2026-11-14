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
    unordered_map<char, ll> um;
    fr(i, 0, sz(s))
    {
        um[s[i]]++;
    }
    ll ind = 0;
    while (um[s[ind]] > 1)
    {
        um[s[ind]]--;
        ind++;
    }
    if (ind == sz(s))
    {
        cout << s[0] << endl;
        return;
    }
    fr(i, ind, sz(s))
    {
        cout << s[i];
    }
    cout << nl;
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