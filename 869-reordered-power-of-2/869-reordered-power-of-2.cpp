class Solution {
public:
    bool reorderedPowerOf2(int n) {
//         if (n==0) 
//             return false;
//         // return( floor(log2(n))==ceil(log2(n))) ?true:false;
//         while(n>1&&(n&1)==0)
//             n>>=1;
        
//         return n==1?true:false;
        
        string N_str = sorted_num(n);
        for (int i = 0; i < 32; i++)
            if (N_str == sorted_num(1 << i)) return true;
        return false;
    }
    
    string sorted_num(int n) {
        string res = to_string(n);
        sort(res.begin(), res.end());
        return res;
        
        
    }
};
// 