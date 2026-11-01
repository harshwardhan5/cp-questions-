#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n,k;
    cin>>n>>k;
    ll na = n%10;
    ll nk = k%10;
    cout<<na+nk<<endl;
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