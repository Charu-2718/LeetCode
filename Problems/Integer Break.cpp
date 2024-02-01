class Solution {
public:
    int integerBreak(int n) {
        if(n<=3){
            return n-1;
        }
        vector<int> dp(60,1);
        for(int i =1; i <= n ; i++){
            for(int j = 1 ; j<= i ;j++){
                dp[i] = max(dp[i], dp[i-j]*j);
            }
        }
        return dp[n];
    }
};