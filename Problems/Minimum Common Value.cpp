//using brute force
//it will give TLE
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans = -1; 

        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (nums1[i] == nums2[j]) {
                    ans = nums1[i];
                    break;
                }
            }
            if (ans != -1) {
                break;
            }
        }

        return ans;
    }
};
// using two pointers
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int  i = 0, j = 0 ;
        while(i < n1 && j < n2){
            if(nums1[i] == nums2[j]){
                return nums1[i];
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
    }
};
//using hastable
class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        unordered_map<int ,int>mp;
        for(auto i: nums1){
            mp[i]++;
        }
        for(auto j: nums2){
            if(mp.find(j) != mp.end()){
                return j;
            }
        }
        return -1;
        
    }
};