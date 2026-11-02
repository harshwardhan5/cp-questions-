#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve() {
    ll a, b;
    cin>>a>>b;
    ll val;
    ll mid;
    if(a & 1 ){
        mid = a;
        val = a/2 + 1;
    }
    else{
        val = a/2;
        mid = a-1;
    }
    if(b <= val){
        cout<<b*2-1<<"\n";
    }
    else{
        cout<<(b-val)*2<<"\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    //cin >> t;
    while (t--) solve();
    return 0;
}