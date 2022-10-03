class Solution {
public:
    /*
    void recur(vector<int> &num ,int i,int j,int target,vector<int> v){
        if(num[i]+num[j]==target)
        {
          
            v.push_back(i);
            v.push_back(j);
            return;
        }
        recur(num,i++,j,target,v);
     //   recur(num,i,j--,target,v);
    }
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++)
        {
            v.push_back(make_pair(nums[i],i));
        }
       
        sort(v.begin(),v.end());
        int i=0;
        int j=n-1;
        vector<int> ans;
        while(true){
            if(v[i].first+v[j].first==target)
            {
                
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                break;
            }
            else if(v[i].first+v[j].first<target){
                i++;
            }
            else{
                j--;
            }
        }
    return ans;
    }
/*
        int i=0;
        int j=nums.size()-1;
        vector<int> ans;
        recur(nums,i,j,target,ans);
        return ans;
    }*/
};