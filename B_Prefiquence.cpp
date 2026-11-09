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
    ll n, m;
    string s1, s2;
    cin >> n >> m;
    cin >> s1 >> s2;
    ll i1 = 0;
    ll i2 = 0;
    ll ans = 0;

    for(ll i =0; i < m && i1 < n; i++){
        if(s1[i1] == s2[i]){
            i1++;
            ans++;
        }
    }
    // while (i1 < n && i2 < m)
    // {
    //     while (s1[i1] != s2[i2])
    //         i2++;
    //     if (s1[i1] == s2[i2])
    //     {
    //         ans++;
    //         i1++;
    //         i2++;
    //     }
    // }
    cout << ans << endl;
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