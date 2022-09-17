class Solution {
public:
    char repeatedCharacter(string s) {
        char ans;
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            if(m[s[i]]>1)
            {
                ans=s[i];
                break;
            }
        }
        return ans;
    }
};