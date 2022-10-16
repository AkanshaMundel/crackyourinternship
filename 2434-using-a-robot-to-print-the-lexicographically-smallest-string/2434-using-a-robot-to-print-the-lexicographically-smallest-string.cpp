class Solution {
public:
    string robotWithString(string s) {
     int n = s.length();
        vector<char>sufix(n);
        sufix[n-1]= s[n-1];
        for(int i = n-2; i>=0; i--){
            sufix[i]= min (sufix[i+1], s[i]);
        }
        string ppr;
        stack<char>st;
        int i =0;
        while(i<n){
            if(st.size()==0){
                st.push(s[i]);
                i++;
                continue;
            }
           if(st.top()<=sufix[i]){
               ppr += st.top();
               st.pop();
           }
            else{
                st.push(s[i]);
                i++;
            }
        }
        while(st.size()>0){ //ading remaing char i last
            ppr +=(st.top());
            st.pop();
            
        }
        return ppr;
            
    }
};
//given the s anf return paper string which is lex smallest 
//creating the sufix frm end so tht we keep adding the samllest on left 
