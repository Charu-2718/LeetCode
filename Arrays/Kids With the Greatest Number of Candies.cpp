class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int n = candies.size();
        vector<bool> result(n, false);

        int maxCandies = 0;
        for (int i = 0; i < n; i++) {
            maxCandies = max(maxCandies, candies[i]);
        }

        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                result[i] = true;
            }
        }

        return result;
    }
};