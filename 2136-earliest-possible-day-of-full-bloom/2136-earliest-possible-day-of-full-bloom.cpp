class Solution {
public:
    static bool comp(pair<int,int>v1,pair<int,int>v2){
        return v1.second>v2.second;//sorted accoding to highest grow time
    }
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
        vector<pair<int,int>>v;
        for(int i = 0; i <plantTime.size();i++){
            v.push_back({plantTime[i],growTime[i]});
        }
        sort(v.begin(),v.end(),comp);
        int start=0;
        int ans=0;
        for(int i = 0;i<plantTime.size();i++){
            start += v[i].first;
            ans = max(ans,start+v[i].second);
        }
        return ans;
    }
};
//need to sort according to grow time decrese order and its take time to planted then if complete planted will grow nxt plant but //meanwhile its take time to grow nd we got then bloom day