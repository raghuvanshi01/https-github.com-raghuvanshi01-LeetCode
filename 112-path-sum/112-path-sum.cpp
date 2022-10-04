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
    bool flag=false;
    void h(TreeNode* root,int sum,int target)
    {
        if(root==NULL)
        {
            return;
        }
        sum+=root->val;
        if(root->left ==NULL && root->right==NULL && sum==target)
        {
            flag=true;
            return;
        }
        h(root->left,sum,target);
        h(root->right,sum,target);
        
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
       h(root,0,targetSum);
        return flag;
        
    }
};