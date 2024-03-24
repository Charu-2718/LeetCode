class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int str=0;
        int end=nums.size()-1;
         
        while(end>=str){
            int mid=str+(end-str)/2;
            if(nums[mid] < mid + 1)
                end = mid - 1;
            else 
                str = mid + 1;
        }

        return str;
        
    }
};