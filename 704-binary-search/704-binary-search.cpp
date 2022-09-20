class Solution {
public:
    int bs(vector<int>& nums,int t,int s,int e){
        int mid=s+(e-s)/2;
        if(s>e)
        {
            return -1;
        }
        if(nums[mid]==t)
        {
            return mid;
        }
        else if(nums[mid]<t)
        {
            return bs(nums,t,mid+1,e);
        }
        else {
            return bs(nums,t,s,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        return bs(nums,target,s,e);
        
    }
};