#include <iostream>
#include <vector>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    vector<ll> arr;
    arr.push_back(1);
    for(int i = 2; i <=n; i++){
        if(n % i == 0){
            arr.push_back(i);
        }
    }
    for(ll x : arr){
        cout<< x << " "<<endl;
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