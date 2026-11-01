#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin>>n;
    ll ft = 0;
    ll st = 1;
    for(ll i = 1; i < n; i++){
        ll nxt = ft + st;
        ft = st;
        st = nxt;
    }
    cout << ft << endl;
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