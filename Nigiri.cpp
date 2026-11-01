#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin>>s;
    ll n = s.length();
    ll count = 0;
    string ans = "";
    for(int i = 0; i < n; i++){
        if(s[i] == 'o'){
            count++;
        }
    }
    if(count % 2 == 0){
        ans= "even";
    }
    else{
        ans= "odd";
    }
    cout<<ans << endl;
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