#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    ll o = n;
    ll cnt = 1;
    while(n >= 10){
        n /= 10;
        cnt++;
    }
    ll val = n+1;
    val = val * pow(10,cnt-1);
    cout<< val - o << endl;
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