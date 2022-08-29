class Solution {
public:
    int maxProduct(vector<int>& nums) {
// //         //using khadans algo 
// //         int maxp= INT_MIN;
// //         int prod=1;
// //          for(int i =0;i<nums.size();i++){
// //             prod *=nums[i];
           
// //             maxp= max(maxp,prod);
// //              if(prod ==0)prod=1;
// //         }
// //         prod=1;
// //         for(int i =nums.size()-1;i>=0;i--){
// //             prod *=nums[i];
           
// //             maxp= max(maxp,prod);
// //             if(prod ==0)prod=1;
// //         }
// //         return maxp;
        
        
//        // using dp :
        int ans= nums[0];
        int n = nums.size();
        vector<int> dpmin(nums);
         vector<int> dpmax(nums);

        for(int i =1;i<n;i++){
            dpmin[i]= min(nums[i],nums[i]*(nums[i]>=0 ?dpmin[i-1] : dpmax[i-1]));
            dpmax[i]= max(nums[i],nums[i]*(nums[i]>=0 ?dpmax[i-1] : dpmin[i-1]));
            ans= max(ans,dpmax[i]);
            cout<<ans;
            
        }
        return ans;
        
    }
};
//-8 , 5, 3, 1 ,6..-8ans 
// that is we traverse from left to ri8 so always -8 grater so to find other subarry prod is traverse froom ri8 to left
//2nd case is id prod =0 set it to 1;
//tc o(n)

//next approch is dp 
