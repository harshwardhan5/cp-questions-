#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

const int MOD = 1e9 + 7;

void solve() {
    ll a,b,c;
    cin>> a >> b >> c;
    vector<ll> arr(a),brr(b);
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    for(int i=0;i<b;i++){
        cin>>brr[i];
    }
    sort(all(arr));
    sort(all(brr));
    ll ans = 0;
    for(int i =0; i < a; i++){
        for(int j =0; j < b; j++){
            if(arr[i] + brr[j] <= c){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}