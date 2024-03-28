#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int  i = 0 ; 
        int  j = 0 ;
        int result = 0 ;
        unordered_map<int,int> mp;
        while(j<n){
            mp[nums[j]]++;
            while(i < j && mp[nums[j]] > k){
                mp[nums[i]]--;
                i++;
            }
            result = max(result , j-i+1);
            j++;
        }
        return result;

    }
};
int main(){
    Solution s;
    vector<int> nums = {1,2,3,1,2,3,1,2};
    int k = 2;
    cout<<s.maxSubarrayLength(nums,k);
}