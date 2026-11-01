#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b;
    cin>>a>>b;
    if(a >= b){
        cout<< "Yes" << endl;
    }
    else{
        cout<< "No" << endl;
    }       
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}