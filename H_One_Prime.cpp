#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            cout<< "NO" << endl;
            return;
        }
    }   
    cout<< "YES" << endl;
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