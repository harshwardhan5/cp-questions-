#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<ll>> dir = {{0,1},{-1,0},{0,-1},{1,0}};
    vector<vector<ll>> curr = {{0,0}};
    int d = 0;
    for(char c : s){
        if(c == 'S'){
            curr[0][0] += dir[d][0];
            curr[0][1] += dir[d][1];
        }
        else{
            d = (d+1)%4;
        }
    }
    cout << curr[0][1] << " " << curr[0][0] << "\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}