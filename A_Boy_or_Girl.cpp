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
    set<char> ss;
    fr(i, 0, sz(s)) ss.insert(s[i]);

    if (sz(ss) & 1)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t = 1;
    //cin >> t;
    while (t--)
        solve();
    return 0;
}