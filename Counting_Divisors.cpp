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
const ll maxn = 1e6;
ll cnt[1000001]; // Assuming maxn is 1e6

void solve()
{
    take(n);
    cout << cnt[n] << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    for (long long i = 1; i <= maxn; i++)
    {
        for (long long j = i; j <= maxn; j += i)
        {
            cnt[j]++;
        }
    }

    int t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}