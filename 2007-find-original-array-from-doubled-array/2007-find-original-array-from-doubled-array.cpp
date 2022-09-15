class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>ans;
        unordered_map<int,int> mp;
        int n = changed.size();
        if(n%2){
            return ans;
        }
        for(int i :changed){
            mp[i]++;
        }
        sort(changed.begin(),changed.end());
        for(auto x :changed){
           if( mp[x] ==0){continue;}  //already 0 then continue
            if(mp[x*2]==0){ return {};}
            if(mp[x]&& mp[x*2]){ //finding if have its double ele then decrease
                mp[2*x]--;
                ans.push_back(x);
                mp[x]--;
                
            }
        }
        return ans;
    }
};