class Solution {
public:
    void bfs(int row,int col, vector<vector<char>>& grid,vector<vector<int>>&vis){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});
        int n = grid.size();
        int m = grid[0].size();
        
         while(!q.empty()){
             int row= q.front().first;
             int col = q.front().second;
             q.pop();
             for( int delr = -1;delr<= 1;delr++){ //to traverse the in adj have four diection 
                 for(int delc = -1;delc<= 1;delc++){
                     if(!(delc==0 || delr==0))continue; 
                     int nrow= row+delr;
                     int ncol = col+delc;
                     if(nrow>=0 && nrow<n && ncol >=0 && ncol <m &&  grid[nrow][ncol]=='1'&& !vis[nrow][ncol]){ //cheching 
                        
                            vis[nrow][ncol]=1;   
                             q.push({nrow,ncol});  
                         
                     }
                 }
             }
         }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt =0;
        for(int row = 0;row< n; row++){
            for(int col = 0;col<m; col++){
                if(!vis[row][col]&&grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,grid,vis);
                }
               
            }
        }
        return cnt;
    }
};