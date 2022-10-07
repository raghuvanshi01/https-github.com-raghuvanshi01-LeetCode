class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int N=9;
        unordered_set<char> r[N];
        unordered_set<char> c[N];
        unordered_set<char> b[N];
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                
                if(board[i][j]!='.')
                {
                    int s = (i/3)*3+j/3;
                    char val=board[i][j];
                    if(r[i].count(val) || c[j].count(val) || b[s].count(val)>0)
                    {
                        return false;
                    }
                        r[i].insert(val);
                    c[j].insert(val);
                    b[s].insert(val);
                }
            }
        }
        return true;
    }
};