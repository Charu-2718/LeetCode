class Solution {
public:
    int n;
    int memo[50001];

    int getNextIndex(vector<vector<int>>& array, int str, int currentJobEnd) {
        int end = n - 1;
        int result = n + 1;

        while (str <= end) {
            int mid = str + (end - str) / 2;
            if (array[mid][0] >= currentJobEnd) {
                result = mid;
                end = mid - 1;
            } else {
                str = mid + 1;
            }
        }
        return result;
    }

    int solve(vector<vector<int>>& array, int i) {
        if (i >= n) {
            return 0;
        }

        if (memo[i] != -1) {
            return memo[i];
        }

        int next = getNextIndex(array, i + 1, array[i][1]);
        int taken = array[i][2] + solve(array, next);
        int notTaken = solve(array, i + 1);

        return memo[i] = max(taken, notTaken);
    }

    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        n = startTime.size();  // Use the class member variable
        memset(memo, -1, sizeof(memo));
        // create a vector of vectors to avoid shuffling of data
        vector<vector<int>> array(n, vector<int>(3, 0));

        for (int i = 0; i < n; i++) {
            array[i] = { startTime[i], endTime[i], profit[i]};
        }
        // use comparator to sort according to the needed variable
        auto comp = [&](auto& vec1, auto& vec2) {
            return vec1[0] <= vec2[0];
        };
        // sort the array
        sort(array.begin(), array.end(), comp);

        return solve(array, 0);
    }
};
