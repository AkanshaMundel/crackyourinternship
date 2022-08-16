class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0; int leftsum =0;
        for(int x:nums) sum+=x;
        for(int i = 0;i<nums.size();i++){
            if(leftsum == (sum-nums[i])) return i;
             else{
                 leftsum += nums[i];
                 sum -= nums[i];
             }   
        }
        return -1;
    }
};