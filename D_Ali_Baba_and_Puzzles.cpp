#include <iostream>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    //6 cases
    if( a + b - c == d){
        cout<<"YES"<<endl;
    }
    else if(a + b * c == d){
        cout<<"YES"<<endl;
    }
    else if(a - b + c == d){
        cout<<"YES"<<endl;
    }
    else if(a - b * c == d){
        cout<<"YES"<<endl;
    }
    else if(a * b + c == d){
        cout<<"YES"<<endl;
    }
    else if(a * b - c == d){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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