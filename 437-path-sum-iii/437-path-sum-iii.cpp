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
         void in(TreeNode* root,vector<TreeNode*> &v)
           {
               if(root==NULL)
               {
                   return;
               }
             in(root->left,v);
             v.push_back(root);
             in(root->right,v);
        
           }
    void pre(TreeNode* root,int target,long long sum,long long &ans)
    {
        if(root==NULL)
        {
            return;
        }
        sum+=root->val;
        if(sum==target)
        {
            ans++;
        }
        pre(root->left,target,sum,ans);
        pre(root->right,target,sum,ans);
        sum-=root->val;    
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        vector<TreeNode*> v;
        long long ans=0;
        in(root,v);
        for(int i=0;i<v.size();i++)
        {
            TreeNode* temp=v[i];
     // cout<<temp->val<<endl;
        pre(temp,targetSum,0,ans);
            cout<<ans<<endl;
        }
        return ans;
    }
};