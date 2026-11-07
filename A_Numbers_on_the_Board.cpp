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
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll n = r - l + 1;
    ll sum = (l + r) * n / 2;
    if(l > 0 || r < 0) cout<<n-1<<"\n";
    else if(l <= 0 && 0 <= r){
        ll m = min(-l,r);
        ans = 2* m + 1;
        if(n > ans){
            ans++;
        }
        cout<<n - ans<<"\n";
    }
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