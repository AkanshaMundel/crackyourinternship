class Solution {
public:
    void dfscall( vector<vector<char>>& grid,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        if(i<0||j<0||i>=n||j>=m ) {return ;}
         if(grid[i][j]=='0') return ;
         grid[i][j]='0';
        dfscall(grid,i,j-1);
        dfscall(grid,i,j+1);
       dfscall(grid,i-1,j);
       dfscall(grid,i+1,j);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt=0;
        // vector<vector<int >>vis(n,vector<int>(m,0));
        
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if( grid[i][j]=='1'){
                    cnt++;
                     dfscall(grid,i,j);
                   
                }
            }
        }
        return cnt;
    }
};
