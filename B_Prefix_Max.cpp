#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
        int n; cin >> n;
        int maxi = 0; 
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] > maxi){
                maxi = arr[i];
            }
        }
        cout<< maxi * n << endl;
        
    }
}