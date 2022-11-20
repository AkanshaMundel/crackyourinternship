class Solution {
public:
     bool findWord(int i , int j , int n , int m , int k ,string word,vector<vector<char>>& board ){
         if(k>=word.size())return true;
         if(i>=n||i<0||j<0||j>=m ||board[i][j]=='.'||word[k]!=board[i][j])return false;
         if(word.size()==1 && word[k]==board[i][j])return true;
         board[i][j]= '.';
         bool temp = false;
         int x[4] = {0,0,-1,1};
        int y[4] = {-1,1,0,0};
         
         for(int z = 0; z<4;z++){
             temp = temp || findWord(i+x[z],j +y[z],n ,m, k+1 , word , board);
             
         }
         board[i][j]= word[k];
         return temp;
     }
    bool exist(vector<vector<char>>& board, string word) {
        
        int n = board.size();
        int m = board[0].size();
        if(word.size() ==0) return false;
        if(n==0) return false;
        for(int i = 0; i<n;i++){
            for(int j = 0; j<m;j++){
                 if(word[0]==board[i][j]){
                     if(findWord(i ,j , n , m , 0 , word, board)) return true;
                 }
            }
        }
        return false;
    }
};