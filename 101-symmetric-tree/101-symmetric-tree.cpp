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
    /*
    void inorder(TreeNode* root,vector<int> &ans)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* mirror(TreeNode* root)
    {
        if(root==NULL)
        {
            return root;
        }
        TreeNode* t=root->left;
        root->left=root->right;
        root->right=t;
        if(root->left){
            mirror(root->left);
        }
        if(root->right){
            mirror(root->right);
        }
        return root;
    }
    */
    bool issame(TreeNode* p,TreeNode* q)
    {
        if(p==NULL && q==NULL)
        {
            return true;
        }
        if(p!=NULL && q==NULL || p==NULL && q!=NULL)
        {
            return false;
        }
        if(p->val==q->val){
            return issame(p->left,q->right) && issame(p->right,q->left);
        }
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        bool ans=issame(root->left,root->right);
        return ans;
    }
};