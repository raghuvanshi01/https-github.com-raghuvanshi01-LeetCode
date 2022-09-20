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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);
       if(root==NULL)
       {
           return ans;
       }
        while(!q.empty()){
              vector<int> helper;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* f=q.front();
                  q.pop();
                 helper.push_back(f->val);
                if(f->left){q.push(f->left);}
                if(f->right){q.push(f->right);}
            }
           
            ans.push_back(helper);
          //   helper.clear();
            
        }
        return ans;
    }
};