#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()
#define endl "\n"
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define vi vector<ll> 

const int MOD = 1e9 + 7;

void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_map<ll, ll> mp;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(all(a));
    ll cnt =0;
    //  1 count;
    for(ll i =0; i < n; i++){
        if(a[i] <= m){
            if(!mp.contains(a[i])){
               // cerr << "a[i] = " << a[i] << endl;
                mp[a[i]] = 1;
                cnt++;
            }
        }
        else{
            break;
        }
    }
    // 2 count;
   fr(i,0,n-1){
    fr(j,i+1,n){
        ll curr = a[i] + a[j];
        if(curr <= m){
            if(!mp.contains(curr)){
               // cerr << "a[i] = " << a[i] << " a[j] = " << a[j] << endl;
                //cerr << "curr = " << curr << endl;
                mp[curr] = 1;
                cnt++;
            }
        }
        else{
            break;
        }
    }
   }
    //3 count;
    fr(i,0,n-2){
        fr(j,i+1,n-1){
            fr(k,j+1,n){
                ll curr = a[i] + a[j] + a[k];
                if(curr <= m){
                    if(!mp.contains(curr)){
                        //cerr << "a[i] = " << a[i] << " a[j] = " << a[j] << " a[k] = " << a[k] << endl;
                        //cerr << "curr = " << curr << endl;
                        mp[curr] = 1;
                        cnt++;
                    }
                }
                else{
                    break;
                }
            }
        }
    }
    cout << cnt << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
   // cin >> t;
    while (t--)
        solve();
    return 0;
}