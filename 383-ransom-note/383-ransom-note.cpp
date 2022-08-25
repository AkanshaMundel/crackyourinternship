class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        for(auto it:magazine){
            mp[it]++;
        }
        //itrate in ransonate in map to find all ele 
        for(auto i :ransomNote){
           
            if(!mp[i]--){//if its value zero then ranate have more ele thn maz
                return false;
            }
        }
        return true;
    }
};