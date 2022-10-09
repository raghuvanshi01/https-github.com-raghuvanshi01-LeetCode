class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n=words.size();
        bool flag=false;
       // int ans=0;
        unordered_map<string,int> m;
        for(int i=0;i<n;i++)
        {
            m[words[i]]++;
        }
        int ans=0;
       // int c=0;
        for(int i=0;i<n;i++)
        {
            string s=words[i];
            reverse(s.begin(),s.end());
            if( words[i]!=s && m[s]>0 && m[words[i]]>0)
            {
                m[s]--;
                m[words[i]]--;
                ans+=4;
            }
            else if(words[i]==s && m[s]>1)
            {
                m[s]-=2;
                ans+=4;
            }
            else if(words[i]==s && flag==false && m[s]>0)
            {
                m[s]--;
                ans+=2;
                flag=true;
            }
        }
        return ans;
    }
};