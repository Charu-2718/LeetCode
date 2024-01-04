class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i : nums){
            mp[i]++;
        }

        int ans = 0;
        for( auto i : mp){
            int t = i.second;
            if( t == 1){
                return -1 ;
            }
            ans = ans + t/3 ;
            if(t%3){
                ans++;
            }
        }
        return ans;
                 
    }
};