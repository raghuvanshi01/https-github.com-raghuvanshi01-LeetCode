class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
        int k=0;
        int count=1;
        nums[k++]=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
            {
                if(count<2)
                {
                    nums[k++]=nums[i];
                }
                count++;
            }
            else{
                count=1;
                nums[k++]=nums[i];
            }
        }
        return k;
    }
};