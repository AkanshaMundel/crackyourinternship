class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,1);
        int maxi =1;
        for(int i =0;i<n;i++){
            for(int j =0 ;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]= max(dp[i],1+dp[j]);
                }
            }
            maxi= max(maxi,dp[i]);
            
        }
        return maxi;
    }
};
//here we traverse and use store in dp and if less number present then added with cur dp 
//sc o(1)
//tc o(n2)