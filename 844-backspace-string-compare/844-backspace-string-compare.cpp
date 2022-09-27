class Solution {
public:

    bool backspaceCompare(string s, string t) {
        string a="";
        string b="";
        int x=0;
        int y=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                x--;
                x=max(0,x);
            }
            else{
                s[x]=s[i];
                x++;
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                y--;
                y=max(0,y);
            }
            else{
                t[y]=t[i];
                y++;
            }
        }
        if(x!=y)
        {
            return false;
        }
        for(int i=0;i<x;i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }
        return true;
    }
};