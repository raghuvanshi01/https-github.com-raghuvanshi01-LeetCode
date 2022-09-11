class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*
        int i=0;
        int maxi=0;
        int n=prices.size();
        int mini=INT_MAX;
        while(i<n)
        {
            mini=min(mini,prices[i]);
            if(prices[i]>mini)
            {
                maxi=max(maxi,prices[i]-mini);
            }
            i++;
        }
        return maxi;
        */
        
    int minitillnow=prices[0];
    int maxtillnow=prices[0];
        int ans=0;
        for(int i=0;i<prices.size();i++)
        {
            minitillnow=min(minitillnow,prices[i]);
            if(prices[i]>=minitillnow)
            {
                int diff = prices[i]-minitillnow;
            ans=max(diff,ans);
            }
            
        }
        
        return ans;
        
        
    }
};