class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;//just sort the string and assign 
        for(int i = 0;i<strs.size();i++){
            string s = strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto [key,value]:mp){
            ans.push_back(value);
        }
        return ans;
    }
};