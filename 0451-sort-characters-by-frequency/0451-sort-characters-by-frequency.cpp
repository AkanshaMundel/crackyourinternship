class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>mp;
        for(int i = 0; i< s.size(); i++){
            mp[s[i]]++;//store the fequency
        }
       priority_queue<pair<int,char>>maxheap;//for decend of feq
        for(auto it:mp){
            maxheap.push({it.second, it.first});
        }
        string ans;
        while(!maxheap.empty()){
            char ch = maxheap.top().second;
            int freq = maxheap.top().first;
            maxheap.pop();
            
            for(int i = 0; i<freq; i++ ){
                ans += ch;
            }
        }
        return ans;
    }
};