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
    ll n;
    cin >> n;
    if (n < 4)
    {
        cout << -1 << nl;
        return;
    }
    else
    {
        cout << 4 _ 2 _ 3 _ 1 << " ";
        fr(i, 5, n + 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;
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