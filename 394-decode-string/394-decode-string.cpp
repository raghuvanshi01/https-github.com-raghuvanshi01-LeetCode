class Solution {
public:
    string decodeString(string s) {
        stack<pair<string,int>> st;
        int currnum=0;
        string currstr="";
        int prevnum=0;
        string prevstr="";
        for(int i=0;i<s.length();i++)
        {
            if(isdigit(s[i]))
            {
                currnum=(currnum*10)+(s[i]-48);
            }
            else if(isalpha(s[i]))
            {
                currstr+=s[i];
            }
            else if(s[i]=='[')
            {
               st.push({currstr,currnum}); 
                currnum=0;
                currstr="";
            }
            else if(s[i]==']')
            {
                prevstr=currstr;
                for(int i=1;i<st.top().second;i++)
                {
                    prevstr+=currstr;
                }
                currstr=st.top().first+prevstr;
                st.pop();
                
            }
        }
        return currstr;
    }
};