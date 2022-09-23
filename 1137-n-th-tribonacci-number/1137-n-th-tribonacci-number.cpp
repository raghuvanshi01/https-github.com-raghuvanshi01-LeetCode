class Solution {
public:
    /*
    int recur(int n,vector<int> &dp)
    {
        if(n<=1)
        {
            return n;
        }
        if(n==2)
        {
            return 1;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n]=recur(n-1,dp)+recur(n-2,dp)+recur(n-3,dp);
    }
    */
    int tribonacci(int n) {
       int dp[n+1];
        if(n<=1)
        {
            return n;
        }
        dp[0]=0;
        dp[1]=1;
        dp[2]=1;
        if(n<3)
        {
            return dp[n];
        }
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
    }
};