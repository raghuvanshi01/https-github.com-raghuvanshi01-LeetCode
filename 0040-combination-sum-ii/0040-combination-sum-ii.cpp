class Solution {
public:
    vector<vector<int>> ans;
   void recur(vector<int> c,int target,int idx,int n,vector<int> &ds)
   {
         if(target==0)
           {
               ans.push_back(ds);
               return;
           }
         
       
       //sum+=c[n];
      // int take=0;
      for(int i=idx;i<n;i++)
      {
          if(i!=idx && c[i]==c[i-1])continue;
          if(c[i]<=target)
          {
              ds.push_back(c[i]);
              recur(c,target-c[i],i+1,n,ds);
              ds.pop_back();
          }
         // recur(c,target,i+1,n,ds);
      }
   }
 
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
                vector<int> ds;
        int n=candidates.size();
        sort(candidates.begin(), candidates.end());
        recur(candidates,target,0,n,ds);
        return ans;
    }
};