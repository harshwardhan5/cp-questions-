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

bool pali(const string& s)
{
    ll x = 0;
    ll y = sz(s) - 1;
    while (x < y)
    {
        if (s[x] == s[y])
        {
            x++;
            y--;
        }
        else
            return false;
    }
    return true;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
 string x = "";
    while (m > 0 && !s.empty())
{
    if (s.find_first_not_of(s[0]) == string::npos)   // all chars same
    {
        s += string(m, s.back());
        break;
    }
    if (pali(s)) s += s.back();
    else s = s.substr(0, sz(s) / 2);
    m--;
}
    cout<<s<< "\n";
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