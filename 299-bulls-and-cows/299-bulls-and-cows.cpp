class Solution {
public:
    string getHint(string secret, string guess) {
     int n=secret.length();
        int b=0;
        int c=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            m[secret[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(m.find(guess[i])!=m.end())
            {
                m[guess[i]]--;
                if(m[guess[i]]==0)
                {
                    m.erase(guess[i]);
                }
                c++;
            }
        }
        for(int i=0;i<n;i++)
        {
            if(secret[i]==guess[i])
            {
                b++;
                c--;
            }
        }
        string ans="";
        ans+=to_string(b)+"A"+to_string(c)+"B";
        return ans;
    }
};