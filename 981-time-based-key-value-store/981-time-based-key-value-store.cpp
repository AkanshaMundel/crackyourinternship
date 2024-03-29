class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>mp;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});//adding value into map 
    }
    
    string get(string key, int timestamp) {
        if(mp.find(key)==mp.end()) return "";
        int l =0;
        int h = mp[key].size()-1;
        if(mp[key][0].first>timestamp) return "";//if timestrmp greater nd in future too no chnce to get smaller //value
        string ans;
        while(l<=h){
            int mid = l+(h-l)/2;
             if(timestamp==mp[key][mid].first){
                return mp[key][mid].second;
            }
            else if(timestamp>mp[key][mid].first){
                ans = mp[key][mid].second;
                l = mid+1; 
            }
            else{
                
                h = mid-1; 
            }   
        }
        return ans;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */