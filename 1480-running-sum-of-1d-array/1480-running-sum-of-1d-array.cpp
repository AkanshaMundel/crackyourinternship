class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        //vector<int> ans = {nums[0]};
        for(int i = 1;i<nums.size();i++){
            nums[i] += nums[i-1];
           // ans.push_back(ans.back()+nums[i])
           
        }
      return nums; //using input array 
    }
};