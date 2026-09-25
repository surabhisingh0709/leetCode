class Solution {
public:
    int stairs(int i, vector<int>&dp)
    {
        dp[0]=1;
        dp[1]=1;

        //if(dp[i] !=-1) return dp[i];

        for(int j =2 ; j<=i ; j++)
        {
            int left = dp[j-1];
            int right = dp[j-2];
            dp[j]=left+right;
        }
        
        return dp[i];
    }
public:
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);

        return stairs(n,dp);       
    }
};