#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size();

        sort(begin(nums), end(nums));

        vector<vector<int>> ans;

        for(int  i = 0 ; i < n ; i += 3){ //i,i+1,i+2
            if(nums[i+2]-nums[i]>k){
                return {};
            }
            ans.push_back({nums[i] ,nums[i+1] , nums[i+2]});
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int> nums = {1,3,4,8,7,9,3,5,1};
    int k = 2;
    vector<vector<int>> ans = s.divideArray(nums,k);
    for(auto i : ans){
        for(auto j : i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}