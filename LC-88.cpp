#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m == 0){
            nums1 = nums2;
        }
        else if(n == 0){
            return;
        }
        int i = 0;
        int j = 0;
        vector<int> ans;
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i < m){
            while(i < m){
                ans.push_back(nums1[i]);
                i++;
            }
        }
        if(j < n){
            while(j < n){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        for(int i =0; i< ans.size(); i++){
            nums1[i] = ans[i];
        }
        return;
    }
};

int main(){
    Solution s;
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 5, 6};
    s.merge(nums1, 3, nums2, 3);
    for(int i = 0; i < nums1.size(); i++){
        cout << nums1[i] << " ";
    }
    return 0;
}