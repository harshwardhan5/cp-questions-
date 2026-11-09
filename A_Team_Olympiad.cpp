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
    ll n;
    cin>>n;
    stack<ll> one;
    stack<ll> two;
    stack<ll> three;
    fr(i,0,n){
        ll x;
        cin>>x;
        if(x == 1) one.push(i+1);
        else if(x== 2) two.push(i+1);
        else three.push(i+1);
    }

    if(sz(one) == 0 || sz(two) == 0 || sz(three) == 0){
        cout<<0<<endl;
        return;
    }
    vi ans;
    ll cnt =0;
    while(sz(one) && sz(two) && sz(three)){
        ans.push_back(one.top());
        ans.push_back(two.top());
        ans.push_back(three.top());
        cnt++;
        one.pop();
        two.pop();
        three.pop();
    }
    cout<<cnt<<endl;
    ll ind =0;
    fr(i,0,sz(ans)){
        cout<<ans[i]<<" ";
        ind++;
        if(ind == 3){
            cout<<endl;
            ind = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--) solve();
    return 0;
}