#include<iostream>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        int x;
        cin>>x;
        int val =0;
        if(x <= 1399){
            val = 4;
        }
        else if(x <= 1599){
            val = 3;
        }
        else if(x <= 1899){
            val = 2;
        }
        else{
            val = 1;
        }
        cout<<"Division "<< val << endl;
    }
}