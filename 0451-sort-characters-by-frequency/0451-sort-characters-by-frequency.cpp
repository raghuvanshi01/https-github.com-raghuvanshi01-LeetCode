class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> m;
        priority_queue<pair<int,char>> pq;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
        }
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        int size = pq.size();
        while(size--)
        {
            auto x=pq.top();
            pq.pop();
         while(x.first--)
         {
             ans+=x.second;
         }
        }
        return ans;
    }
};