class cmp{
    public:
    bool operator()(pair<int,string> a, pair<int,string> b) const{
        if(a.first < b.first) return true;
        else if(a.first == b.first && a.second>b.second) return true;
        return false;
    }
};
class Solution {
public:
 
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> m;
    priority_queue<pair<int,string>,vector<pair<int,string>>,cmp> pq;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        for(auto x:m)
        {
            pq.push({x.second,x.first});
        }
        vector<string> ans;
        int i=0;
        while(i!=k)
        {
           // cout<<pq.top().second<<" ";
           // auto y = pq.top();
            ans.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        //sort(ans.begin(),ans.end());
        return ans;

    }

};