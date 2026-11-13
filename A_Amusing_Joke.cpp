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
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string a = s1 + s2;
    if (sz(a) != sz(s3))
    {
        cout << "NO\n";
        return;
    }

    sort(all(a));
    sort(all(s3));
    cout << (a == s3 ? "YES\n" : "NO\n");
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