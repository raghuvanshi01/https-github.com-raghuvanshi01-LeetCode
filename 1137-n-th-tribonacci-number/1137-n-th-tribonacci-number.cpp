class Solution {
public:
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
    int tribonacci(int n) {
       vector<int> dp(n+1,-1);
        return recur(n,dp);
    }
};