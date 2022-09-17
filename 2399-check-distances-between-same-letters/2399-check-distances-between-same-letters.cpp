class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        // unordered_map<char,vector<int>>mp; //storing the occurence of each char acc to 0 based index
        // for(int i =0;i<s.size();i++){
        //     mp[s[i]].push_back(i);
        // }
        // for(auto it:mp){
        //     if(it.second[1]-it.second[0]-1 !=distance[it.first-'a']){ //cheching sec appearing indx-first apping indx == given dist 
        //         return false;
        //     }
        // }
        // return true
        set <char>st;
        for(int i =0;i<s.size();i++){
            if(st.find(s[i])!= st.end()){
                continue;
            }
            else{
                st.insert(s[i]);
                int x = i+distance[s[i]-'a']+1;//fining the expected place of second repested ele
                if(x<s.size()&&s[i]==s[x]){ //checking if first els is match with second expect place have same value or not 
                   continue;
                }
                else{ return false;}
            }
        }
        return true;
    }
};
//or using set to store the string so that no visit twice then 