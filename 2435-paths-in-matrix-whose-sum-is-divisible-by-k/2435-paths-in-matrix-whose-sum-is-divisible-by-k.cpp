class Solution {
public:
    //int mod = 1e9+7;
    int fun(vector<vector<int>>& grid, vector<vector<vector<int>>> &dp,int i ,int j ,int sum, int k){
        if(i ==0&&j==0){
             sum += grid[0][0];
               if (sum%k ==0)return 1;
            return 0;
        }
        if(i<0||j<0) return 0;
        if(dp[i][j][sum]!=-1) return dp[i][j][sum];
        int up = fun(grid,dp,i-1,j,(sum+grid[i][j])%k,k);
        int left = fun(grid,dp,i,j-1,(sum+grid[i][j])%k,k);
        return dp[i][j][sum]= (up+left)%1000000007;
    }
    int numberOfPaths(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(k,-1)));
        return fun(grid,dp,n-1,m-1,0,k);
    }
};
// class Solution {
// public:
//     int mod = 1e9 + 7, m, n, K;
//     int numberOfPaths(vector<vector<int>>& grid, int k) {
//         m = grid.size(), n = grid[0].size(), K = k;
//         vector<vector<vector<int>>> dp(m + 1, vector<vector<int>>(n + 1, vector<int>(k + 1, -1)));
//         return dfs(0, 0, 0, grid, dp);
//     }
//     int dfs(int i, int j, int s, vector<vector<int>>& grid, vector<vector<vector<int>>>& dp) {
//         if (i == m || j == n) return 0;
//         if (i == m - 1 && j == n - 1) return ((s + grid[i][j]) % K) == 0;
//         if (dp[i][j][s] != -1) return dp[i][j][s];
//         return dp[i][j][s] = (dfs(i + 1, j, (s + grid[i][j]) % K, grid, dp) + dfs(i, j + 1, (s + grid[i][j]) % K, grid, dp)) % mod;
//     }
