class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>m;
        int row= mat.size();
        if(row==0) return mat;
        int col= mat[0].size();
        for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                int k =i-j;//access the diagnoal ele
                m[k].push(mat[i][j]); //direct pushing the ele of k in the same diagonal 
            }
        }
        for(int i = 0;i<row;i++){
            for(int j =0;j<col;j++){
                int k =i-j;//access the diagnoal ele
                mat[i][j]=m[k].top();// insert back to mat 
                m[k].pop();
            }
        }
        return mat;
    }
   
};