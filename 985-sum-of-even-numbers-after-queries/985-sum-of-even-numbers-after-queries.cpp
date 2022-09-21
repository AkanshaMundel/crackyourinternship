class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> ans;
        int sum =0;
        for(auto it:nums){
           if(it%2==0){
               sum += it;
           }
        }
        for(auto x :queries ){
            int idx = x[1];
             int val = x[0];
           if(nums[idx]%2==0){
               sum -= nums[idx];
           }
            nums[idx] +=val; //if not even then direct add the val
            if(nums[idx]%2==0){
                sum +=nums[idx]; //after adding the val in particular idx in num then 
                
            }
            ans.push_back(sum);
            
        }
        return ans;
        
    }
};