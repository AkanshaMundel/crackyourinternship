class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        vector<vector<int>>ans;
        int row=heights.size();
            int col =heights[0].size(); 
        if(heights.size()<1) return ans;
        vector<vector<int>> pac(row,vector<int>(col,0));
        vector<vector<int>> alt(row,vector<int>(col,0));
        
            for(int j =0;j<col;j++){
                fun(0,j,INT_MIN,heights,pac);//calling for up pac
                fun(row-1,j,INT_MIN,heights,alt);//caling frm doen toward up  [dwn ]
            }
          for(int i =0;i<row;i++){
                fun(i,0,INT_MIN,heights,pac);//calling for left pac
                fun(i,col-1,INT_MIN,heights,alt);//caling frm right
            }
        for(int i =0;i<row;i++){
            for(int j =0;j<col;j++){
                if(pac[i][j] ==1 && alt[i][j]==1){
                    
                
                vector<int >v(2);
                v[0]=i;
                v[1]=j;
                ans.push_back(v);
                }
            }
        }
        return ans;
        
    }
    void fun(int i,int j , int prev,vector<vector<int>>& heights,vector<vector<int>>& ocen ){
        if(i<0||j<0||i>=heights.size()||j>=heights[0].size())return ;
        if(ocen[i][j]==1) return ;
           if( heights[i][j]<prev)
               return ;
        ocen[i][j]=1;
        fun(i+1,j,heights[i][j],heights,ocen);
         fun(i-1,j,heights[i][j],heights,ocen);
         fun(i,j+1,heights[i][j],heights,ocen);
         fun(i,j-1,heights[i][j],heights,ocen);
        
    }
};