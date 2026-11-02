#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            ll cnt = 0;
            while (i < n && s[i] == '.')
            {
                cnt++;
                i++;
            }
            ans += cnt;
            if (cnt >= 3)
            {
                flag = true;
            }
        }
    }
    if(flag){
        cout<<2<<"\n";
    }
    else {
        cout<<ans<<"\n";
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