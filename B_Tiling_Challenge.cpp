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
    vector<string> s(n);
    fr(i, 0, n) cin >> s[i];

    fr(i, 1, n - 1)
    {
        fr(j, 1, n - 1)
        {
            if (s[i][j] == '.')
            {
                if (s[i - 1][j] == '.' && s[i][j - 1] == '.' && s[i + 1][j] == '.' && s[i][j + 1] == '.')
                {
                    s[i - 1][j] = '#';
                    s[i][j - 1] = '#';
                    s[i + 1][j] = '#';
                    s[i][j + 1] = '#';
                    s[i][j] = '#';
                }
            }
        }
    }
    fr(i,0,n){
        fr(j,0,n){
            if(s[i][j] == '.'){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--)
        solve();
    return 0;
}