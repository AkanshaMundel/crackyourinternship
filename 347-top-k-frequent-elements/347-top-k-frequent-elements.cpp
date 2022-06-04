
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for(auto x: nums) m[x]++;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>minheap;
        for(auto p: m){
            minheap.push({p.second, p.first});
            if(minheap.size() > k) minheap.pop();
        }
        vector<int>res;
        while(k--) res.push_back(minheap.top().second), minheap.pop();
        return res;
    }
};
