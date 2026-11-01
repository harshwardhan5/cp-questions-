#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll n,k;
    cin>>n>>k;
    string s[n];
    for(int i =0; i < n; i++){
        cin>>s[i];
    }
    ll cnt = 1;
    for(int i =1; i < n; i++){
        if(s[0] == s[i]){
            cnt++;
        }
    }
    cout<<cnt<<"\n";
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