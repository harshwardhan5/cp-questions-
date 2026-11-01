#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        arr.erase(unique(arr.begin(), arr.end()), arr.end());
        int mex =0;
       int ans = 0;
       for(int i = 0 ; i < arr.size(); i++){
        if(i == 0 || arr[i] != arr[i-1] + 1){
            ans = 0;
        }
        ans++;
        mex = max(mex, ans);
       }
       cout << mex << endl;
    }
}