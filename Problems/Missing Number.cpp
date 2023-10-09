class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int totalSum = n * (n + 1) / 2; 
        
        for (int i = 0; i < n; i++) {
            totalSum -= nums[i]; 
        }
        
        return totalSum;
    }
};


//Another method
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        
        for(int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
        }
        
        int ans = -1; 

        for(int j = 0; j <= maxi; j++) {
            bool found = false; 
            
            for(int i = 0; i < n; i++) {
                if(nums[i] == j) {
                    found = true;
                    break; 
                }
            }
            
            if (!found) {
                ans = j; 
            }
        }

        if (ans == -1) {
            ans = n;
        }

        return ans;
    }
};

