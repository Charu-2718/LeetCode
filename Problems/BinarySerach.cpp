class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str=0;
        int end=nums.size()-1;
        int mid;
        while(str<=end){
            mid=str+(end-str)/2;
            if(nums[mid]==target){
            return mid;
            }
            else if(nums[mid]>target){
            end=mid-1;
            }
            else if(nums[mid]<target){
            str=mid+1;
            }
        }
        return -1;
        
    }
    
};