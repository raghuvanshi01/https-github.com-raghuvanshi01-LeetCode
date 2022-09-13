class Solution {
public:
    bool ispal(string s)
    {
        int st=0;
        int e=s.length()-1;
        while(st<e)
        {
            if(s[st]!=s[e])
            {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.length();i++)
        {
            if(iswalnum(s[i]))
            {
                
                a+=tolower(s[i]);
            }
        }
        cout<<a<<endl;
        if(ispal(a))return true;
        return false;
        
    }
};