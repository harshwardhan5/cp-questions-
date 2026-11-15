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
    unordered_map<char, int> um;
    bool chk = true;
    for (char c : s)
    {
        um[c]++;
    }
    string mid, left;
    for (auto &x : um)
    {
        if (x.second & 1)
        {
            if (!mid.empty())
            {
                cout << "NO SOLUTION\n";
                return;
            }

            mid = x.first;
            x.second--;
        }
    }

    for (auto &x : um)
    {
        left.append(x.second / 2, x.first);
    }

    string right = left;
    reverse(right.begin(), right.end());

    cout << left + mid + right << nl;
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