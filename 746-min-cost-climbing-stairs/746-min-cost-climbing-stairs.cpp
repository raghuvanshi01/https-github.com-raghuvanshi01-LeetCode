class Solution {
public:
    int recur(vector<int> &cost,int n,int i,vector<int> dp)
    {
       if(i>=n)
       {
           return 0;
       }
        if(i==n-1)
        {
            return cost[i];
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        int take=0;
        int not_take=0;
        take=cost[i]+recur(cost,n,i+1,dp);
        not_take=cost[i]+recur(cost,n,i+2,dp);
        return dp[i]= min(take,not_take);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        
        
        int n=cost.size();
        vector<int> dp(n,0);
        dp[0]=cost[0];
        dp[1]=cost[1];
        dp[n-1]=cost[n-1];
        for(int i=0;i<n;i++)
        {
            if(i<2)
            {
                dp[i]=cost[i];
            }
            else{
                dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
            }
        }
        //return min(recur(cost,n,0,dp),recur(cost,n,1,dp));
        return min(dp[n-1],dp[n-2]);
    }
};