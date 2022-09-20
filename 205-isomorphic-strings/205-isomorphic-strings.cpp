class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_map<char,bool> m1;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(m.find(s[i])==m.end())
            {
                if(m1[t[i]]==true)
                {
                    return false;
                }
                m[s[i]]=t[i];
                m1[t[i]]=true;
            }
            else{
                if(m[s[i]]!=t[i])
                {
                    return false;
                }
            }
        }
        return true;
    }
};