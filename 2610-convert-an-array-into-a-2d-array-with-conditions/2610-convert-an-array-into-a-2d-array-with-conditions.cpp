class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        int maxi =INT_MIN;
        unordered_map<int, int>mp;
        for(auto it: nums){
            mp[it]++;
            if(maxi <mp[it]){
                maxi = mp[it];//storing max cnt 
            }
        }
       
        for(int i = 0 ; i<maxi; i++){
             vector<int>tmp;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(mp[it->first]!=0){
               tmp.push_back(it->first);
                mp[it->first]--;
            }
        }
            ans.push_back(tmp);
        
        }
        return ans;
    }
};
//using map as much repeated no is equal to row number 
//store the freq nd nu in map 
//then itrste till max freq strt putting in matrix