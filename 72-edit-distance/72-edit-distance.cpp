class Solution {
public:
    int editDis(string &word1,string &word2,int n1,int n2, vector<vector<int>> &dp)
    {
        /*
        if(i==0)
        {
            return j;
        }
        if(j==0)
        {
            return i;
        }
        if(a[i-1]==b[j-1])
        {
            recur(a,b,i-1,j-1);
        }
        return 1+min(recur(a,b,i,j-1),  
                     min(recur(a,b,i-1,j),
                         recur(a,b,i-1,j-1)));
                         */
        if(n1 == 0)
            return n2;
        if(n2 == 0)
            return n1;
       // cout<<n1<<" "<<n2<<endl;
        if(dp[n1][n2]!=-1)
        {
            return dp[n1][n2];
        }
        if(word1[n1-1] == word2[n2-1]) {
            return dp[n1][n2]=editDis(word1, word2, n1-1, n2-1,dp);
        }
            
        return dp[n1][n2]=1+min(editDis(word1, word2, n1, n2-1,dp),
                  min(editDis(word1, word2, n1-1, n2,dp),
                  editDis(word1, word2, n1-1, n2-1,dp)));
    }
    
    int minDistance(string word1, string word2) {
        
        int n1 = word1.size();
        int n2 = word2.size();
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,-1));
        return editDis(word1, word2, n1, n2,dp);
        
    }
    /*
    int minDistance(string word1, string word2) {
        int i=word1.size();
        int j=word2.size();
        return recur(word1,word2,i,j);
    }*/
};