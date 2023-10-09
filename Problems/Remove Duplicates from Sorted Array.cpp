class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       int n=nums.size();
       if(n==1){
        return 1;
       }
       int position = 1;
       for(int i=1;i<n;i++){
        if(nums[i]!=nums[position-1]){
            nums[position]=nums[i];
            position++;
        }
       }
       return position;
            
    }
};