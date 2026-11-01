#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll mini = min(a,min(b,c));
    ll maxi = max(a,max(b,c));
    cout<< mini << " " << maxi << endl;
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