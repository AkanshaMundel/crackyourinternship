class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int fr =0,lc= m-1, lr= n-1,fc= 0;
        vector<int> ans;
        while(fr<=lr && fc<=lc){
            //print fr  
            for(int i = fc; i<=lc;i++){
                 ans.push_back(matrix[fr][i]);
                
            }fr++;
            
            //print lc fr to lr
            for(int i = fr;i<=lr;i++){
                 ans.push_back(matrix[i][lc]);
            }
            lc--;
             
               //print lr lc to fc 
            if(lr>=fr)
            for(int i = lc; i>=fc;i--){
                 ans.push_back(matrix[lr][i]);
            }
            lr--;
                
                //print fc
            if(fc<=lc){
                for(int i = lr;i>=fr;i--){
                     ans.push_back(matrix[i][fc]);
                }
                fc++;
            }
            
        }
        return ans;
    }
};