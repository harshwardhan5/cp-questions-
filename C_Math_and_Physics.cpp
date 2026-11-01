#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i =0; i < n; i++){
        cin>>a[i];
    }
    while(a.size() > 2){
        if(a[1] != 1){
            a[0]++;
            a[2]+=a[1]-1;
            a.erase(a.begin() + 1);
        }
        else if (a[1] == 1 && a.size() >= 4) {
            ll ind = 1;
           while(ind < a.size() && a[ind] == 1) ind++;
           if(ind == a.size()){cout<<"-1\n"; return;}
           else{
            a[1]++;
            a[3]+=a[2]-1;
            a.erase(a.begin()+2);
           }
        }
    }
    int ans = a[0] + a[1];
    cout<<ans-1<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}