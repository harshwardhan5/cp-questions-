#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    string a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    if(a2==b2){
        cout<< "ARE Brothers" << endl;
    }
    else{
        cout<< "NOT" << endl;
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