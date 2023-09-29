class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0;
        int highestAltitude = 0;

        for (int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            highestAltitude = max(highestAltitude, sum);
        }

        return highestAltitude;
    }
};
