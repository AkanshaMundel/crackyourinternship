class Solution {
public:
    int partitionString(string s) {
        //using hashing to store the element if we got same ele which is already present then make it partision 
        int ans= 1;
        set<char>set;
        for(auto i :s){
            if(set.find(i)!=set.end()){ //checking if the elemt preent in set already 
                set.clear();
                ans++;//keep count the partision 
            }
            set.insert(i);
        }
        return ans;
    }
};