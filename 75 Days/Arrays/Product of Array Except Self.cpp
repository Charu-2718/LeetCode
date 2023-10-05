class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
        vector<int>ans(n);
        ans[0]=nums[0];
        for(int i=1;i<n;i++){
            ans[i]=nums[i]*ans[i-1];
        }
        int product=nums[n-1];
        ans[n-1]=ans[n-2];
        for(int i=n-2;i>=1;i--){
            ans[i]=product*ans[i-1];
            product*=nums[i];
        }
        ans[0]=product;
        return ans;
    }
};