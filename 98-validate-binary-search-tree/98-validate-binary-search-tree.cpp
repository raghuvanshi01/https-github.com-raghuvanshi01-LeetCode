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
   
         bool isValidBST(TreeNode* root) {
        /*
        vector<int> ans;
        inorder(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
            {
                return false;
            }
        }
        return true;
        */
        return func(root,NULL,NULL);
        
    }
    private:
    bool func(TreeNode* root,TreeNode* minval,TreeNode* maxval)
    {
        if(root==NULL)
        {
            return true;
        }
        if(minval && root->val<=minval->val || maxval && root->val>=maxval->val)
        {
            return false;
        }
       return func(root->left,minval,root) && func(root->right,root,maxval);
        
    }
    
};