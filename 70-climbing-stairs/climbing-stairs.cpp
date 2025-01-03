class Solution {
public:
    static int climbStairsUtil(int n,vector<int>& dp){
        if(dp[n]>0)
            return dp[n];
        else if(n==1||n==2)
        {
            dp[n] = n;
            return dp[n];
        }
        else {
            dp[n] = climbStairsUtil(n-1,dp)+climbStairsUtil(n-2,dp);
            return dp[n];
        }
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        return climbStairsUtil(n,dp);
    }
};