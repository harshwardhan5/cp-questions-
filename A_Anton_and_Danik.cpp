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
    unordered_map<char, ll> um;
    fr(i, 0, n)
    {
        char x;
        cin >> x;
        um[x]++;
    }
    if (um['A'] > um['D'])
        cout << "Anton\n";
    else if (um['D'] > um['A'])
        cout << "Danik\n";
    else
        cout << "Friendship\n";
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