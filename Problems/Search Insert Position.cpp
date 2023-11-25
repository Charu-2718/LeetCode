class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int str=0;
        int end=nums.size();
        int mid;
        if(target>nums[end-1]){
            return end;
        }
        while(str<=end){
            mid=str+end/2;
            if(nums[mid]==target){
                return mid;
                
            }
            else if(nums[mid]>target){
                end=mid-1;

            }
            else{
                str=mid+1;
            }
            
        }
        return str;
    }
};