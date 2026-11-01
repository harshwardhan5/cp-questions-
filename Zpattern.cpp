#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;  
    int k = num - 2;  //Reading input from STDIN
	for(int i =0; i < num; i++){
		if(i==0 || i == num-1){
			for(int j =0; j <num; j++){
				cout<<"*";
			}
			cout<<'\n';
		}
		else{
				for(int j = 0; j < k; j++){
					cout<<" ";
				}
				cout<<"*";
				k--;
                cout<<endl;
		}
	}
	return 0;
}