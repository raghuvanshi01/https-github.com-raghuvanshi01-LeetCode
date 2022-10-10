class Solution {
public:
    int countSquares(vector<vector<int>>& arr) {
     //didnt understood , but logic can be verified   
        int r=arr.size();
        int c=arr[0].size();
        vector<vector<int>> dp(r,vector<int>(c,1));
        for(int i=0;i<c;i++)
        {
            dp[0][i]=arr[0][i];
        }
        for(int j=0;j<r;j++){
        dp[j][0]=arr[j][0];                           
        }
         int sum=0;
         for(int i=1;i<r;i++)
         {
             for(int j=1;j<c;j++)
             {
                 if(arr[i][j]==0)
                 {
                     dp[i][j]=0;
                 }
                 else{
                     dp[i][j]=1+min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1]));
                 }
                // sum+=dp[i][j];
             }
         }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                sum+=dp[i][j];
            }
        }
                               return sum;
    }
};