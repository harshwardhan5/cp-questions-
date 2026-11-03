#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define fr(i, a, b) for (int i = a; i < b; i++)
#define vi vector<ll>
#define take(n) ll n; cin>>n;

const int MOD = 1e9 + 7;

void solve() {
    take(n);
    string s;
    cin>>s;
    vi T, M;
    fr(i,0,n){
        if(s[i] == 'T'){
            T.pb(i);
        }
        else{
            M.pb(i);
        }
    }
    if(sz(T) != 2*sz(M)){
        cout<<"NO\n";
        return;
    }
    fr(i,0,sz(M)){
        if(T[i] > M[i] || M[i] > T[i+sz(M)]){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}