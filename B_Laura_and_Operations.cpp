#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans[3]={0,0,0};
    if(b%2 == c%2){
        ans[0] = 1;
    }
    if(a%2 == c%2){
        ans[1] = 1;
    }
    if(a%2 == b%2){
        ans[2] = 1;
    }
    cout<< ans[0]<<" "<< ans[1]<<" "<< ans[2]<< endl;
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