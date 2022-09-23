class Solution {
public:
    int fun(int i ){
        return 1+log2(i);
    }
    int concatenatedBinary(int n) {
      long ans =0;
        long mod = 1e9+7;
        for(int i =1;i<=n;i++){
            int len = fun(i);
            ans =((ans<<len)%mod+i)%mod;
        }
        return ans;
    }
};
//to better approach is to bit wise left shift and how to find how muchh amt it req to shift number 
//like have 2, so 1 is <<two place so ans is prev rs*2^x +no that is added 

//5 - 101  to find its bny  formula is (1+log2  5) to find the binary of number

