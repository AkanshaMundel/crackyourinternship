class Solution {
public:
//     int fun(int m ,int n,vector<vector<int>>&dp){
//         if(m<0||n<0) return 0;
        
//         if(m==0 || n==0 ) return 1;
//         if(dp[m][n]!=-1) return dp[m][n];
//         int up=fun(m-1,n,dp);
//          int dwn=fun(m,n-1,dp);
        
//         return dp[m][n]=(up+dwn);
//     }
    int uniquePaths(int m, int n) {
         int dp[m][n];
        
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(i==0&&j==0 )dp[i][j] =1;
                else{
                  int up =0; 
                int dwn = 0;
                if(i>0) up=dp[i-1][j];
               if(j>0)  dwn=dp[i][j-1];
                dp[i][j]= up+dwn;  
                }
               
            }
        }
        return dp[m-1][n-1];
    }
};
