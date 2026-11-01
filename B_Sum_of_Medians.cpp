#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        ll n,m; 
        cin >> n>>m;
        vector<ll> arr(n*m);
        for(ll i = 0; i < n*m; i++){
            cin >> arr[i];
        }
        ll ans = 0;
        ll step = n/2 + 1;
        ll index = n*m - step;
        for(ll i = 0; i < m; i++){
            ans += arr[index];
            index -= step;
        }
        cout << ans << endl;
    }
}