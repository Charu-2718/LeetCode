class Solution {
public:
    int longestCommonSubsequence(string t1, string t2) {
        int m = t1.length();
        int n = t2.length();

        int dp[m+1][n+1];
        memset(dp,0,sizeof (dp));

        for(int i = 1 ; i <= m ; i++ ){
            for(int j = 1 ; j <= n ; j++ ){
                if(t1[i-1]==t2[j-1]){
                    dp[i][j]= dp[i-1][j-1]+1;
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                } 
            }
        }
        return dp[m][n];
    }
};