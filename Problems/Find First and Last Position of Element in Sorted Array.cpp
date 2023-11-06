class Solution {
public:
    int firstO(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        
        int ans=-1;
        while(s<=e){
            int mid = s+ (e-s)/2;
            if(nums[mid]==target){
               ans=mid;
               e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            
        }
        return ans;
    }


    int lastO(vector<int>& nums, int target){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(nums[mid]==target){
               ans=mid;
               s=mid+1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            
        }
        return ans;
    }



    vector<int> searchRange(vector<int>& nums, int target) {
        int f=firstO(nums, target);
        int l=lastO(nums, target);

        return {f,l};
    }
};