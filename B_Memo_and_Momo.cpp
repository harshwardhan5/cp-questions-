#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,k;
    cin>>a>>b>>k;   
    if(a % k == 0 && b % k == 0){
        cout<< "Both" << endl;
    }
    else if(a % k == 0){
        cout<< "Memo" << endl;
    }
    else if(b % k == 0){
        cout<< "Momo" << endl;
    }
    else{
        cout<< "No One" << endl;
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