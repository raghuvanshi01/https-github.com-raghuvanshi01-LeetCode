class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        recur(0,s,path,ans);
        return ans;
    }
    void recur(int index,string &s, vector<string> &path, vector<vector<string>> &ans)
    {
        if(index==s.size())
        {
            ans.push_back(path);
            return;
        }
        for(int i = index;i<s.size();i++)
        {
            if(ispal(s,index,i)){
                path.push_back(s.substr(index,i-index+1));
                recur(i+1,s,path,ans);
                path.pop_back();
            }
            
        }
    }
    bool ispal(string &s, int i,int n)
    {
        while(i<=n)
        {
            if(s[i++]!=s[n--])
            {
                return false;
            }
        }
        return true;
    }
};