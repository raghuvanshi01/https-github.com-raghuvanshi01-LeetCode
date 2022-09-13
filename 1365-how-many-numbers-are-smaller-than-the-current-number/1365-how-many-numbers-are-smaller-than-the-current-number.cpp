class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
     vector<int> ans;
        vector<int> copy;
        for(int i=0;i<nums.size();i++)
        {
            copy.push_back(nums[i]);
        }
        sort(copy.begin(),copy.end());
        unordered_map<int,int> m;
        for(int i=0;i<copy.size();i++)
        {
            if(m.find(copy[i])==m.end())
            m[copy[i]]=i;
        }
        for(int j=0;j<nums.size();j++)
        {
            ans.push_back(m[nums[j]]);
        }
        return ans;
    }
};