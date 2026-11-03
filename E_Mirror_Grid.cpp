#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define vi vector<ll>
#define take(n) ll n; cin>>n;

const int MOD = 1e9 + 7;

void solve() {
    take(n);
    vector<string> grid(n);
    fr(i,0,n){
        cin>>grid[i];
    }
    if(n == 1){
        cout<<0<<"\n";
        return;
    }
    ll ans =0;
   for (int i = 0; i < (n + 1) / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                int ones = 0;

                ones += grid[i][j] - '0';
                ones += grid[j][n - 1 - i] - '0';
                ones += grid[n - 1 - i][n - 1 - j] - '0';
                ones += grid[n - 1 - j][i] - '0';

                ans += min(ones, 4 - ones);
            }
        }

  cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}