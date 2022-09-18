class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int m=0;
        int h=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                l++;
            }
            else if(nums[i]==1)
            {
                m++;
            }
            else{
                h++;
            }
        }
        int i=0;
        int j=0;
        int k=0;
        for(int x=0;x<l;x++)
        {
            nums[x]=0;
        }
        for(int i=l;i<(l+m);i++)
        {
            nums[i]=1;
        }
        for(int i=(l+m);i<(l+m+h);i++)
        {
            nums[i]=2;
        }
        //durga maa
    }
};