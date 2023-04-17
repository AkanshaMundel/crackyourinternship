class Solution {
public:
//is there is any widw which satisfy the no of opertaio req is <=k
// isPossible(int mid, vector<int> &nums, int k){
//     long long int widsum = 0;
//    long long int totalsum = 0;
//     for(int i = 0 ; i<mid; i++){
//         windsum+=nums[i]; //prefix sum 

//     }
//     totalsum  = 1ll *nums[mid+1]*mid
//     if(totalsum - windsum<=k){
//         return true;
//     }
//     //aceking on right part of mid too 
//     int j = 0 ;
//      for(int i = mid, i<nums.size(); ++i){
//            windsum -=nums[j];
//            windsum+= nums[i];
//            totalsum = totalsum
//      }
// }
    int maxFrequency(vector<int>& A, int k) {
//        int l = 1; 
//        int h = nums.size(); int ans= 0;
//        sort(nums.begin(), nums.end());
//        while(l<=h){
//            int mid = (l+h)/2;
//            if(isPossible(mid, nums, k)){
//                 ans = mid;
//                 l= mid+1;

//            }
//            else{
//                h=mid-1;
//            }
//        }
//        rturn ans;
        
        
        //can be solved using slinding window
        
        // int sum = 0 ;
//         int ans = 1;
//         int n = nums.size();
//         int i = 0 ;
//         sort(begin(nums), end(nums));
//         for(int j = 0 ; j<n ; j++){
//             sum +=nums[j];
//             while(((j-i+1)*nums[j]-sum)>k){
//                 sum -= nums[i];
//                 i++;
//             }
//             ans = max(ans, (j-i+1));
            
//         }
//         return ans;
     sort(begin(A), end(A));
        long i = 0, N = A.size(), ans = 1, sum = 0;
        for (int j = 0; j < N; ++j) {
            sum += A[j];
            while ((j - i + 1) * A[j] - sum > k) sum -= A[i++];
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
//in this question we apply the binary search and sliding winfdow as sliding window why??
//just search on range on 1 to n find the mid is possible ans if yess then move on right why sliding window as we see whether will able to get the max freq 
//in order let say [1 2 3 4 ]->  mid is 2 opetation req so will make all elel as last elel 
// no of operation req (10-1)+(10-2)+10-3+ 10-4 --> sum - prefix sum  sould be<=k atmost 