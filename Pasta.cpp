#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve() {
    ll n,m;
    cin>> n >> m;
    vector<ll> a(n),b(m);
    unordered_map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    for(int i =0; i < m;i++){
        if(mp.contains(b[i]) && mp[b[i]]>0){
            mp[b[i]]--;
        }
        else{
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}