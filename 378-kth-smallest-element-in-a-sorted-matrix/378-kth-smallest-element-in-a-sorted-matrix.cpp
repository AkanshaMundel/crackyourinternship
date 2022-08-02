class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
//     priority_queue <int>pq; //max heap
//         for(int i = 0;i<matrix.size();i++){
//             for(int j =0;j<matrix[0].size();j++){
//                 pq.push(matrix[i][j]);
//                 if(pq.size()>k)
//                     pq.pop();
                
//             }
//         }return pq.top();
        //tc nlog k 
        //sc k
        
//         using binary search wid upper bound
        int n = matrix.size();
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];
        while(low<high)
        {
           int mid = low+(high -low)/2 ;
            int cnt= 0;
            for(int i = 0;i<n;i++){
                cnt += upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
            }
            if(cnt<k){
                low= mid+1;
                
            }
            else{
                high = mid;
                
            }
        } return low;      
        
        
    }
};// tc n(nlogn)
//sc 1