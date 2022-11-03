class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int top=0;
        int bottom = r-1;
        int left =0;
        int right=c-1;
        int dir=1;
        vector<int> ans;
        while(left<=right && top<=bottom)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                dir++;
                top++;
            }
            else if(dir==2)
            {
                for(int i=top;i<=bottom;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
                dir++;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
                dir++;
            }
            else if(dir==4)
            {
                for(int i=bottom;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
                dir=1;
            }
        }
        return ans;
        
    }
};