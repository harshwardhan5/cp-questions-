#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b;
    char c;
    cin>>a>>c>>b;
    //cerr<<a<<" "<<c<<" "<<b<<endl;
    if(c=='>'){
        if(a>b){
            cout<< "Right" << endl;
        }
        else{
            cout<< "Wrong" << endl;
        }
    }
    else if(c=='<'){
        if(a<b){
            cout<< "Right" << endl;
        }
        else{
            cout<< "Wrong" << endl;
        }
    }
    else{
        if(a==b){
            cout<< "Right" << endl;
        }
        else{
            cout<< "Wrong" << endl;
        }
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