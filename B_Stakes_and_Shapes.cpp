#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    char ans;
    if(b >= c){
        ans = 'R';
    }
    else if(a >= b){
        ans = 'P';
    }
    else ans = 'S';

    for(int i =0; i < a+b+c; i++) cout<<ans;

    cout<<endl;
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