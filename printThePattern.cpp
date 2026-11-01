#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int num;
	cin >> num; 
    if(num==0){
        cout<<0<<endl;
        return 0;
    }
	int id = 1;  
	int val = 1; //Reading input from STDIN
	bool flag = true;
	for(int i =0; i < num; i++){
		vector<int> row;
		for(int j = 0; j < id; j++){
			row.push_back(val);
			val++;
		}
		if(flag){
			reverse(row.begin(), row.end());
			flag = !flag;
		}
		else if(!flag){
			flag = !flag;
		}
		for(int k = 0; k < row.size(); k++){
            cout<<row[k]<<" ";
        }
		cout<<endl;
		id++;
	}
}