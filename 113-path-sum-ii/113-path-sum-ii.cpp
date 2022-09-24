/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
   void in(TreeNode* root,int target,int sum,vector<int> &ds,vector<vector<int>> &ans)
   {
       if(root==NULL)
       {
           return;
       }
      
       sum+=root->val;
        ds.push_back(root->val);
        if(root->left==NULL && root->right==NULL && target==sum)
       {
           ans.push_back(ds);
       }
      
       in(root->left,target,sum,ds,ans);
       in(root->right,target,sum,ds,ans);
       sum-=root->val;
       ds.pop_back();
   }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
       vector<int> ds;
      int sum=0;
        vector<vector<int> > res;
        in(root,targetSum,sum,ds,res); 
        return res;
    }
};