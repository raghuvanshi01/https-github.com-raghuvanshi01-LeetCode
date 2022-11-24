class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        unordered_map<char,int> a;
        unordered_map<char,int> b;
        for(int i=0;i<word1.length();i++)
        {
            a[word1[i]]++;
            b[word2[i]]++;
        }
        for(auto x:a)
        {
            if(b.find(x.first)!=b.end())
            {
                if(abs(x.second-b[x.first])>3)
                {
                    return false; 
                }
            }
            else{
                if(x.second>3)
                {
                    return false; 
                }
            }
        }
        for(auto x:b)
        {
            if(a.find(x.first)!=a.end())
            {
                if(abs(x.second-a[x.first])>3)
                {
                    return false; 
                }
            }
            else{
                if(x.second>3)
                {
                    return false; 
                }
            }
        }
        return true;
    }
};