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
    take(n)
    ll a = 0;
    ll x;
    while( n >=  10){
        x = n / 10 * 10;
        a += x;
        n = n - x + x /10;
    }
    a+=n;
    cout<<a<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}