class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                
            }
            else{
                cnt =0;
            }
             maxi= max(cnt,maxi);
        }
        return maxi;
    }
};
//tc o(n), sc 1
//increase cnt till we encounter 1 as we  got 0 make cnt =0