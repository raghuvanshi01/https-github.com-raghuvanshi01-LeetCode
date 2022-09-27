class Solution {
public:
    int characterReplacement(string s, int k) {
        int i=0;
        int j=0;
        int maxi=0;
        int n=s.length();
        unordered_map<char,int> m;
        int ans=-1;
        while(j<n)
        {
            m[s[j]]++;
            maxi=max(maxi,m[s[j]]);
            if((j-i+1)-maxi>k)
            {
                m[s[i]]--;
                i++;
            }
            ans=max(ans,(j-i+1));
            j++;
        }
        return ans;
        
    }
};