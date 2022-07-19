class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
     for(int i= 0;i<numRows;i++){
         ans[i].resize(i+1);
         ans[i][0] = ans[i][i] = 1;
         for(int j = 1;j<i;j++){
            ans[i][j] =ans[i-1][j-1] +ans[i-1][j];
         }
           
     }return ans;
         
    }
};


// class Solution {
// public:
//     vector<vector<int>> ans;
//     vector<vector<int>> generate(int numRows) {
//         for(int i = 0; i<numRows; ++i)
//         {
//             vector<int> row(i+1, 1);
//             for(int j = 1; j<i; ++j)
//                 row[j] = ans[i-1][j] + ans[i-1][j-1];
//             ans.push_back(row);
//         }
//         return ans;
//     }
    
// };