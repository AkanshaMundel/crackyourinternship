class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int ,int>mp;
        vector<int>ans;
        for(int i = 0;i<nums.size();i++){
            if(mp.find(target-nums[i])!=mp.end()) {//checking the left value present on map or not 
                ans.push_back(mp[target-nums[i]]); //preent so assing to ans , the indx at key of tar-num[i]
                ans.push_back(i);
        }
        else{
                mp[nums[i]]= i;
            }
        }
        return ans;
      
    }
};
//using hash map 
//tc o(n
//sc o(n)