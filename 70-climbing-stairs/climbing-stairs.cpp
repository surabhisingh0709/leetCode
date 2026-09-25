class Solution {
public:
    int stairs(int i, vector<int>&dp)
    {
        if(i<=1)return 1;

        if(dp[i] !=-1) return dp[i];
        
        int left = stairs(i-1,dp);
        int right = stairs(i-2,dp);
        dp[i]=left+right;

        return dp[i];
    }
public:
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);

        return stairs(n,dp);       
    }
};