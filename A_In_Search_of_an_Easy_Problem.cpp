#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    bool flag = false;
    for(int i = 0; i < n; i++){
        ll x;
        cin>>x;
        if(x == 1){
            flag = true;
        }
    }
    if(flag){
        cout<< "HARD" << endl;
    }
    else{
        cout<< "EASY" << endl;
    }
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