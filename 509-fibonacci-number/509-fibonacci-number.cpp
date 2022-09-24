class Solution {
public:
    int fib(int n) {
        /*
        if(n==0 || n==1)
        {
            return n;
        }
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        for(int i=2;i<n;i++)
        {
            v.push_back(v[i-1]+v[i-2]);
            //cout<<v[i]<<" ";
        }
        return v[n-1]+v[n-2];
       */
        
        /*
        Meoization
        int dp[n+1];
        for(int i=0;i<n+1;i++)
        {
            dp[i]=-1;
        }
        if(n<2){
            return n;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        return dp[n] = fib(n-1)+fib(n-2);
        */
        //Tabulation
        if(n<2)
        {
            return n;
        }
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<n+1;i++)
        {
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};