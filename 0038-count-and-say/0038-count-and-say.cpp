class Solution {
public:
    string countAndSay(int n) {
       if(n==1) return "1";
        if(n==2) return "11";
        string st= "11";
        for(int j = 3;j<=n;j++){
            string t ="";
            st = st+'&';
            int cnt=1;
            for(int i = 1;i<st.length();i++){
                if(st[i]!=st[i-1]){
                    t = t+to_string(cnt);//adding cnt into string
                    t= t+st[i-1];
                    cnt=1;
                }
                else  cnt++;
            }
            st= t;
            
        }
        return st;
    }
};