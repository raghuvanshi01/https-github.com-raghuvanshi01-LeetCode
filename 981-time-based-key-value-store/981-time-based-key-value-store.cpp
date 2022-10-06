class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, map<int, string, greater<int>>> mp;
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]=value;
    }
    
    string get(string key, int timestamp) {
        auto &x = mp[key];
         auto it = x.lower_bound(timestamp);
        if(it==x.end())return "";
        return it->second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
/*
class TimeMap {
public:
    unordered_map<string, map<int, string, greater<int>>> mp;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        
        auto &v = mp[key];
        
        auto itm = v.lower_bound(timestamp);
        if(itm == v.end()) return "";
        
        return itm->second;

    }
};
*/