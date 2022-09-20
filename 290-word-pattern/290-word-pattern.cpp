class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> help;
        string a="";
        for(int i=0;i<s.length();i++)
        {
            
            if(isspace(s[i]))
            {
                help.push_back(a);
                a="";
                continue; 
            }
            a+=s[i];
        }
            help.push_back(a);
        if(pattern.size()!=help.size())
        {
            return false;
        }
            unordered_map<char,string> m;
            unordered_map<string,bool> m1;
            for(int i=0;i<pattern.size();i++)
            {
                if(m.find(pattern[i])==m.end())
                {
                    if(m1[help[i]])
                    {
                        return false;
                    }
                    m[pattern[i]]=help[i];
                    m1[help[i]]=true;
                }
                else{
                    if(help[i]!=m[pattern[i]])
                    {
                        return false;
                    }
                }
            }
            return true;
    }
};