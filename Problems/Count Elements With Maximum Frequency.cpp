class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int ,int> mp;
        for(int num : nums){
            mp[num]++;
        }
        int max_freq=0;
        for(auto &i:mp){
            max_freq=max(max_freq , i.second);
        }
        int elements = 0;
        for(auto &i:mp){
            if(i.second == max_freq ){
                elements++;
            }
        }
        return max_freq*elements;
    }
};