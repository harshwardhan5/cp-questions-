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

    string s;
    cin >> s;

    ll ans = 0;

    while (true)
    {
        char mx = 'a';
        bool palindrome = true;

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - 1 - i])
            {
                palindrome = false;
                mx = max(mx, max(s[i], s[n - 1 - i]));
            }
        }

        if (palindrome)
            break;

        for (char &x : s)
        {
            if (x == mx)
                x--;
        }

        ans++;
    }

    cout << ans << '\n';
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