class Solution {
public:
//     int fun(int ind,int prev,vector<int> &nums,int n, vector<vector<int>>&dp){
//         if(ind==n){
//             return 0;
//         }
//         if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
//         int len = 0+ fun(ind+1,prev,nums,n,dp);
        
//         if(prev==-1||nums[ind]>nums[prev]){
//             len = max(len ,1+fun(ind+1,ind,nums,n,dp));
//         }
//         return dp[ind][prev+1]=len;
            
//     }
    int lengthOfLIS(vector<int>& nums) {

//        // recrussion :
//         int n = nums.size();
//         vector<vector<int>>dp(n,vector<int>(n+1,-1));
//         return fun(0,-1,nums,n,dp);
   // TABULATION
         int n = nums.size();
         vector<vector<int>>dp(n+1,vector<int>(n+1,0));
    
          for(int ind = n-1;ind>=0;ind--){
             for( int prev= n-1;prev>=-1;prev--){
               int len = 0+ dp[ind+1][prev+1];
             if(prev==-1||nums[ind]>nums[prev]){
                len = max(len ,1+dp[ind+1][ind+1]);
                  }
               dp[ind][prev+1]=len;
                    }
                }
            return dp[0][-1+1];
    }
};
