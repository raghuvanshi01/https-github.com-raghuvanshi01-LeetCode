class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       
        unordered_map<int,int> m;
        vector<int> ans;
    
        if(changed.size()%2!=0)return {};
        for(int i=0;i<changed.size();i++)
        {
            m[changed[i]]++;
        }
       sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++)
        {
            //cout<<m.size()<<endl;
            if(m[changed[i]]==0)
            {
                continue;
            }
            if(m[changed[i]*2]==0)return {};
            ans.push_back(changed[i]);
             m[changed[i]]--;
                m[2*changed[i]]--; 
                
        }
        return ans;
    }
};