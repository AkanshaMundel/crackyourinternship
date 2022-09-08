class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1)return 1;
        unordered_map<char,int>mp;
        for(int i= 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt =0;
        for(auto i :mp){
            if(i.second%2!=0)cnt++;// that is all odd value is in cnt 
        }
        if(cnt>1){
            return s.size()-cnt+1; 
        }
        return s.length();
    }
};
//using hashmap