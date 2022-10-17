class Solution {
public:
    bool checkIfPangram(string s) {
//         unordered_map<char,int>mp;
//         for(int i = 0;i<sentence.size();i++){
//             mp[sentence[i]]++;
//         }
//        if( mp.size()==26)
//          return true;
        
//     return false;
        unordered_set<char>set;
        set.insert(s.begin(),s.end());
         return set.size()==26;
    }
};

