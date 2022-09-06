class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.size()==0)return true;
            int j =0 ; //moving in s string
            for(int i =0;i<t.size();i++){ //itrate till t size
                if(t[i] == s[j]) j++;
                if(j==s.size())return true;
            }
        return false;
    }
        
   };
//using pointer 