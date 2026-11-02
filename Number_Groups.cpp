#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve() {
    ll n;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    ll val = 1;
    ll x = 3;
    for(ll i =2; i <n;i++){
       
        val = val + x;
        x = x+2;
        //cerr << "i = " << i << " val = " << val << " x = " << x << endl;
    }
    ll first = n+val;
    ll ans = 0;
    //cerr<< "n = " << n << " val = " << val << " first = " << first << endl;
    for(ll i = 0; i < n; i++){
        ans += first;
        first = first + 2;
    } 
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}