class Solution {
public:
    long long recur(vector<vector<int>> &grid,int m,int n,vector<vector<int>> &dp)
    {
        if(m==0 && n==0)
        {
            return grid[0][0];
        }
        if(m<0 || n<0)
        {
            return INT_MAX;
        }
      
      if(dp[m][n]!=-1)return dp[m][n];
        long long up =grid[m][n] + recur(grid,m,n-1,dp);
        long long left = grid[m][n]+recur(grid,m-1,n,dp);
    //    dp[m][n]=mini;
        return dp[m][n]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n=grid[0].size();
       vector<vector<int>> dp(m,vector<int>(n,-1));
        dp[0][0] = grid[0][0];
        return recur(grid,m-1,n-1,dp);
        
    }
};