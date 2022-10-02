class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        int l = ransomNote.length();
        for(int i=0;i<l;i++)
        {
            m[ransomNote[i]]++;
        }
        for(int i=0;i<magazine.length();i++)
        {
            if(m[magazine[i]]>0)
            {
                m[magazine[i]]--;
            }
            if(m[magazine[i]]==0)
            {
                m.erase(magazine[i]);
            }
        }
        if(m.size()==0)return true;
        return false;
    }
};