class Solution {
public:
    int maxProduct(vector<int>& nums) {
        /*
       int mi=nums[0];
        int ma=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++)
        {
           if(nums[i]<0){
               swap(ma,mi);
           }
            ma=max(nums[i],ma*nums[i]);
            mi=min(nums[i],mi*nums[i]);
            res=max(ma,res);
        }
        return res;
    }
    */
        //either the maxi subarray will be start from left or right
        int cp=1;
        int maxi=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            cp*=nums[i];
            maxi=max(maxi,cp);
            if(cp==0)
            {
                cp=1;
            }
        }
        cp=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            cp*=nums[i];
            maxi=max(maxi,cp);
            if(cp==0)
            {
                cp=1;
            }
        }
        return maxi;
    }
        
};