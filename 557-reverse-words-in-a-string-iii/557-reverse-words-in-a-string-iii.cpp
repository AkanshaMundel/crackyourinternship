class Solution {
public:
    string reverseWords(string s) {
        string dumy,ans;
        int n = s.size();
       
        for(int i =0;i<s.size();i++){
            if(s[i]!=' '){
                dumy +=s[i];
            }
            else{
                reverse(dumy.begin(),dumy.end());
                ans +=dumy;
                ans +=" ";
               
                
                dumy.clear();
            }
            
        }
        reverse(dumy.begin(),dumy.end());
        ans += dumy;
        return ans;
    }
};