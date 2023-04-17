class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int len = 0 ;
        for(int i = 0 ; i<s.size();){
            int z = 0 ;
            int one = 0;
            while(i<s.size() && s[i]=='0'){
                z++;
                i++;
            }
          while(i<s.size() && s[i]=='1'){
                one++;
                i++;
            }
            len = max(len, 2*min(one, z));
        }
        return len;
    }
};