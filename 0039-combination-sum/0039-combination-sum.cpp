class Solution {
public:
    vector<vector<int>> ans;
   void recur(vector<int> c,int target,int i,int n,vector<int> &ds)
   {
       if(i==n)
       {
           if(target==0)
           {
               ans.push_back(ds);
           }
           return;
       }
       
       //sum+=c[n];
      // int take=0;
       if(target>=c[i]){
         ds.push_back(c[i]);
         recur(c,target-c[i],i,n,ds);
         ds.pop_back();
       }
       recur(c,target,i+1,n,ds);
   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        int n=candidates.size();
        recur(candidates,target,0,n,ds);
        return ans;
    }
};