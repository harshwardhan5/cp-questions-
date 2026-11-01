#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    ll e,o,p,ne;
    e = o = p = ne = 0;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x > 0){
            p++;
        }
        else if(x < 0){
            ne++;
        }
        if(x % 2 == 0){
            e++;
        }
        else{
            o++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<ne<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}