class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
     
        int x=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            x=x^nums[i];
        }
        return x;
 
           /*
        int l=0;
        int h=nums.size()-1;
        while(l<h)
        {
            int mid  = l+(h-l)/2;
            if(mid%2==0 && nums[mid]==nums[mid+1] || mid%2!=0 && nums[mid]==nums[mid-1])
            {
                l=mid+1;
            }
            else{
                h=mid;
            }
        }
        return nums[l];
               */
    }
};