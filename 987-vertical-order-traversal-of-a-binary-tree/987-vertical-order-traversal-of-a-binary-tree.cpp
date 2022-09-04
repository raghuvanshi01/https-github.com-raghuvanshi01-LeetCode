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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
         map<int,vector<int>> m;
        vector<vector<int>> ans;
        queue<pair<TreeNode*,int>> q;
        q.push({root,0});
        while(!q.empty())
        {
            int n=q.size();
           vector<pair<int,int>> h;
            int l;
            for(int i=0;i<n;i++)
            {
                TreeNode* f=q.front().first;
                 l=q.front().second;
                q.pop();
               h.push_back({f->val,l});
                if(f->left)
                {
                    q.push({f->left,l-1});
                }
                if(f->right){
                    q.push({f->right,l+1});
                }
            }
            sort(h.begin(),h.end());
            auto x=h[0];
            
            for(auto x:h)
            {
                m[x.second].push_back(x.first);
            }
        }
        for(auto x:m)
        {
            vector<int> h = x.second;
           ans.push_back(h);
        }
        return ans;
    }
};