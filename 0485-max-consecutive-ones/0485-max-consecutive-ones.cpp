class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        int count=1;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]==1)
           {
               while(i<nums.size() && nums[i]==1)
               {
                   count++;
                   i++;
               }
               ans=max(ans,count);
               count=1;
           }
            ans=max(ans,count);
        }
        return ans-1;
    }
};