class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> c(26,0);
    for(auto x:word1)
    {
     c[x-'a']++;   
    }
        for(auto x:word2)
        {
            c[x-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(abs(c[i])>3)
            {
                return false;
            }
        }
        return true;
    }
};