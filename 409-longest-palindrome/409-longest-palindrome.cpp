class Solution {
public:
    int longestPalindrome(string s) {
        int e=0;
        int o=0;
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
         m[s[i]]++;   
        }
        for(auto x:m)
        {
            if(x.second%2==0)
            {
                e++;
            }
            else{
                o++;
            }
        }
        if(o==0)
        {
            return s.length();
        }
        return (s.length()-o+1);
    }
};