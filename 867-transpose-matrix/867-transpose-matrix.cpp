class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        /*
        for(int i=0;i<r;i++)
        {
            for(int j=i+1;j<c;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        return matrix;
        */
        vector<vector<int>> ans(c,vector<int> (r,0));
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                ans[j][i]=matrix[i][j];
            }
        }
        return ans;
    }
};