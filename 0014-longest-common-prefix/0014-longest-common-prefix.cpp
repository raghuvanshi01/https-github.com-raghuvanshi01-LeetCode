class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        string ans="";
        if(s.size()==1)
        {
            return s[0];
        }
        for(int i=0;i<s.size()-1;i++)
        {
            int n=s[i].length();
            int m=s[i+1].length();
            string h="";
            int f=0,se=0;
            while(s[i][f]==s[i+1][se] && f<n && se<m)
            {
                h+=s[i][f];
                f++;
                se++;
            }
            if(h=="")
            {
                return "";
                break;
            }
            if(i==0)
            {
                ans=h;
            }
            if(i!=0)
            {
                if(ans.length()>h.length())
                {
                    ans=h;
                }
            }
           
        }
        return ans;
    }
};